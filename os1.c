//program to demonstrate the use of fork() system call
#include<stdio.h>
#include<unistd.h>
int main()
{
fork();
fork();
printf("%d \n",getpid());
return 0;
}
