#include <signal.h>
#include <unistd.h>
#include <stdio.h>

// Manejador de señales para SIGUSR1
void handle_sigusr1(int sig) {
    printf("Recibido SIGUSR1\n");
}

// Manejador de señales para SIGUSR2
void handle_sigusr2(int sig) {
    printf("Recibido SIGUSR2\n");
}

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Proceso hijo: Configurar manejadores de señales
        signal(SIGUSR1, handle_sigusr1);
        signal(SIGUSR2, handle_sigusr2);

        // Bucle infinito para esperar señales
        while (1) {
            pause();
        }
    } else {
        // Proceso padre: Enviar señales al proceso hijo
        sleep(1); // Esperar un momento para asegurarse de que el hijo está listo
        kill(pid, SIGUSR1);
        sleep(1);
        kill(pid, SIGUSR2);
    }

    return 0;
}
