//zombie process
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid = fork();
 if( pid != 0)
 {
  sleep(10);
  printf("parent process\n"); 
 }
 else
 {
  printf("child process\n");
  exit(0);
 }
}
