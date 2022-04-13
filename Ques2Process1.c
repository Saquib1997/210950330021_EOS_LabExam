//I am using Named Pipe(FIFO) to communicate and concatinate string.
//From process 1 i am sending two string "SAQUIB" and "SIRAJ".
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    int fd;
    fd=open("desdfifo", O_WRONLY);
    write(fd, "SAQUIB",7);
    write(fd, " SIRAJ\n",6);
    close(fd);
    return 0;
}
