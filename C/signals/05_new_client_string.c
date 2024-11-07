#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

void send_char(pid_t pid, char c) {
    for (int i = 0; i < 8; i++) {
        if (c & (1 << i)) {
            kill(pid, SIGUSR1); // Send 1
        } else {
            kill(pid, SIGUSR2); // Send 0
        }
        usleep(10000); // Sleep for a short period to ensure the signal is processed
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <PID> <MESSAGE>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    pid_t pid = atoi(argv[1]);
    char *message = argv[2];

    for (size_t i = 0; i < strlen(message); i++) {
        send_char(pid, message[i]);
    }

    return 0;
}
