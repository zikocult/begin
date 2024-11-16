#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/sendfile.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int write_fd, read_fd;
	struct stat stat_buf;
	off_t offset = 0;

	if (argc < 4)
	{
		read_fd = open(argv[1], O_RDONLY);
		if(read_fd < 0)
			perror(" ");
	}
	fstat(read_fd, &stat_buf); // get file size
	write_fd = open(argv[2], O_WRONLY | O_CREAT, stat_buf.st_mode);
	if (write_fd < 0)
		perror(" ");
	sendfile(write_fd, read_fd, &offset, stat_buf.st_size);
	close(write_fd);
	close(read_fd);
	return (0);
}
