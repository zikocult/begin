#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *buffer;
	char *next;
 
	buffer = (char *)malloc(sizeof(char) * 5);
	next = (char *)malloc(sizeof(char) * 5);
	printf("Enter: \n");

	fgets(buffer, 5, stdin);
	fgets(next, 5, stdin);

	printf("String: %s\n", buffer);
	printf("Next: %s\n", next);

	free(buffer);
	free(next);
	return (0);
}
