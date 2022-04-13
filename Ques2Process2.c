//In the process 2, I am printing the two concatinated strings that is "SAQUIB SIRAJ".
//I have used FIFO IPC mechanism for this communication.

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    unsigned char buff[16];
    int fd;
    fd=open("desdfifo", O_RDONLY);
    read(fd, buff, 15);
    printf("READ:%s", buff);
    close(fd);
    return 0;
}  
