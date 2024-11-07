#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>

int main(void)
{
	int pid = fork();

	if(pid == -1){
		return (1);
	}
	if(pid == 0)
	{
		while (1) {
			printf("PID = %i\n", pid),
			usleep(500000);
		}
	} else {
		sleep(1);
		printf("PID = %i\n", pid),
		kill(pid, SIGKILL);
		wait(NULL);
	}
	return (0);
}
