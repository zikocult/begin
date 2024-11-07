
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <PID> <SIGNAL>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    pid_t pid = atoi(argv[1]);
    int sig = atoi(argv[2]);

    if (kill(pid, sig) == -1) {
        perror("kill");
        exit(EXIT_FAILURE);
    }

    printf("Signal %d sent to process %d\n", sig, pid);
    return 0;
}

