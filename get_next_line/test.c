#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main()
{
	int	fd;
	char buf[5000];
	
	fd = 0;
	fd = open("text.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("test failed");
		return (1);
	}
	
	read(fd, buf, 2000);
	buf[5000] = '\0';
	close(fd);

	while()
	printf("%c", buf[10]);
	return 0;
}
