#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

int x = 0;

void handle_sigusr1()
{
	if (x == 0)
		printf("\n(HINT) Remember that multiplication is a repetitive addition!\n");
	else if (x != 15)
		printf("See you later aligator\n");
	else
		printf("Pretty good\n");
}

int main(void)
{
	int pid = fork();

	if (pid == -1) {
		return (1);
	}
	if (pid == 0)
	{
		sleep(5);
		kill(getppid(), SIGUSR1);
	}
	else {
		struct sigaction sa = { 0 };
		sa.sa_flags = SA_RESTART;
		sa.sa_handler = &handle_sigusr1;
		sigaction(SIGUSR1, &sa, NULL);


		printf("What is the result of 3 x 5?: ");
		scanf("%d", &x);
		if (x == 15)
			printf("Right!\n");
		else
			printf("Wrong!\n");
		wait(NULL);
	}
	return (0);
}
