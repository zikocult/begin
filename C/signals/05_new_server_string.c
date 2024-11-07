#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define MAX_BITS 8

static int bit_count = 0;
static char current_char = 0;

void signal_handler(int sig) {
    if (sig == SIGUSR1) {
        current_char |= (1 << bit_count); // Set bit to 1
    }
    bit_count++;

    if (bit_count == MAX_BITS) {
        printf("%c", current_char);
        fflush(stdout);
        bit_count = 0;
        current_char = 0;
    }
}

int main() {
    struct sigaction sa;

    sa.sa_handler = signal_handler;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);

    if (sigaction(SIGUSR1, &sa, NULL) == -1) {
        perror("sigaction");
        exit(EXIT_FAILURE);
    }

    if (sigaction(SIGUSR2, &sa, NULL) == -1) {
        perror("sigaction");
        exit(EXIT_FAILURE);
    }

    printf("Server PID: %d\n", getpid());

    while (1) {
        pause();
    }

    return 0;
}
