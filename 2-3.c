#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
  int ret;
  ret=write(0,"hello world!\n",13);
  printf("ret=%d\n",ret);
}
