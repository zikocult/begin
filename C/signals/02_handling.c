#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

void handle_sigint()
{
	printf("Kill is not allowed\n");
}

void handle_sigcont()
{
	printf("Input number: ");
	fflush(stdout);
}

int main(void)
{
	// Això seria la manera llarga, aquí controlem el CTRL + C
	// La estructura de sigaction es així:
	//	struct sigaction {
    //		void     (*sa_handler)(int);
    //		void     (*sa_sigaction)(int, siginfo_t *, void *);
    //		sigset_t   sa_mask;
    //		int        sa_flags;
    //		void     (*sa_restorer)(void);
    //	};
	// Tenim que asignar una estructura per acció
	struct sigaction sgnint;
	sgnint.sa_handler = &handle_sigint;
	sgnint.sa_flags = SA_RESTART;
	sigaction(SIGINT, &sgnint, NULL);
	
	//Aquí ho tenim tot en una sola funció, però varia segons la distro
	//Això fa que el CTRL + Z, quan pasem a fg retorni la execució
	signal(SIGCONT, &handle_sigcont);

	int x;

	printf("Input number: ");
	scanf("%d", &x);
	printf("Result %d * 5 = %d\n", x, x * 5);
	return (0);
}

