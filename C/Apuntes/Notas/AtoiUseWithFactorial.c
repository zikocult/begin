
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_iterative_factorial(nb -1));
}

int main(int argc, char **argv){
	printf("argc = %i, argv = %s\n", argc, argv[1]);

	int temp = atoi(argv[1]);
	
	printf("argv entero es = %i\n", temp);
	printf("%i\n", ft_iterative_factorial(temp));
}
