#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd>

    int main(void)
{    
       int fd=open("./test.txt",0_CREAT,0644,"test");
       printf("file descriptor = %d \n ",fd);
       close (fd);
       return 0;


}
