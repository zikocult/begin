
/*
 * Funcion open: int open (const char *pathname, int flags);
 * Funcion read: ssize_t read (int fd, void *buf, size_t count);
 * Funcion close: int close(int fd);
 */

#include <fcntl.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main (void)
{
	int fd; // File Descriptor
	char buf[100];
	ssize_t nr_bytes;

	fd = open("./archivo.txt", O_RDONLY);

	if (fd == -1) // si no s'ha pogut obrir per alguna rao el arxiu
	{
		printf("Error al abrir el archivo");
	}
	else
	{
		nr_bytes = read(fd, buf, 100);
		close(fd);

		if (nr_bytes == 0)
		{
			printf("Archivo vacio\n");
		}
		else
		{
			printf("El numero de caracteres es %d, contenido: %s \n", (int)nr_bytes, buf);
		}
	}
	return 0;
}
