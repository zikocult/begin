#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

static void signal_handler(int sig, siginfo_t *info, void *context) {
    static int c = 0;

	(void)context;
    if (sig == SIGUSR1) {
        printf("Received SIGUSR1\n");
    } else if (sig == SIGUSR2) {
        printf("Received SIGUSR2\n");
        c |= (sig == SIGUSR2);
    }

    if (c) {
        printf("Pretty good\n");
    }

    // Ejemplo de uso de `siginfo_t`
    if (info != NULL) {
        printf("Signal sent by process %d\n", info->si_pid);
        printf("Signal sent by user %d\n", info->si_uid);
    }
}

int main() {
    struct sigaction sa;

    sa.sa_sigaction = signal_handler;
    sa.sa_flags = SA_SIGINFO; // Usar sa_sigaction en lugar de sa_handler
    sigemptyset(&sa.sa_mask);

	printf("Server PID: %d\n", getpid());

    if (sigaction(SIGUSR1, &sa, NULL) == -1) {
        perror("sigaction");
        exit(EXIT_FAILURE);
    }

    if (sigaction(SIGUSR2, &sa, NULL) == -1) {
        perror("sigaction");
        exit(EXIT_FAILURE);
    }

    // Loop to keep the program running to receive signals
    while (1) {
        pause(); // Wait for signals
    }

    return 0;
}

