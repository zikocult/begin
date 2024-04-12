
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0, lenght = 0;
	char temp;

	while (str[lenght] != '\0')
		lenght++;
	
	lenght--;
	while (i < lenght){
		temp = str[i];
		str[i] = str[lenght];
		str[lenght] = temp;
		i++;
		lenght--;
	}
	return (str);
}

int main(int argc, char **argv){

	printf("%s", ft_strrev(argv[1]));
	return 0;
}
