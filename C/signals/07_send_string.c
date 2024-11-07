#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

// Manejador de señales
void signal_handler(int sig) {
    static int bit_count = 0;
    static char current_char = 0;

    if (sig == SIGUSR1) {
        current_char <<= 1;
    } else if (sig == SIGUSR2) {
        current_char = (current_char << 1) | 1;
    }
    bit_count++;

    if (bit_count == 8) {
        printf("Recibido: %c\n", current_char);
        bit_count = 0;
        current_char = 0;
    }
}

void send_char(pid_t pid, char c) {
    for (int i = 7; i >= 0; i--) {
        if ((c >> i) & 1) {
            kill(pid, SIGUSR2); // Enviar bit 1
        } else {
            kill(pid, SIGUSR1); // Enviar bit 0
        }
        usleep(45); // Esperar un tiempo para asegurar que la señal es recibida
    }
}

void send_string(pid_t pid, const char *str) {
    while (*str) {
        send_char(pid, *str++);
    }
}

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Proceso hijo: configurar los manejadores de señales
        signal(SIGUSR1, signal_handler);
        signal(SIGUSR2, signal_handler);

        // Bucle infinito para esperar señales
        while (1) {
            pause();
        }
    } else {
        // Proceso padre: enviar una cadena de caracteres al proceso hijo
        sleep(1); // Esperar un momento para asegurarse de que el hijo está listo
        send_string(pid, "Hola");
    }

    return 0;
}

