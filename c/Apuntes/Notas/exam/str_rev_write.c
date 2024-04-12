#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str){
	int i, j;

	while (str[i] != '\0')	
		i++;
	while (i >=0){
		write (1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return(str);
}

int main(int argc, char **argv){
	printf("%s", ft_strrev(argv[1]));
	return 0;
}
