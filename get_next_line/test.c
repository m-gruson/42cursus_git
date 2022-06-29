#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER_SIZE 5
int	main()
{
	int	fd;
	int buflen;
	char buf[BUFFER_SIZE + 1];

	fd = open("text.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("test failed");
		return (1);
	}
	
	buflen = read(fd, buf, BUFFER_SIZE);
	buf[buflen] = '\0';
	close(fd);

	printf("%s\n", buf);
	return 0;
}
