//orphan process
#include<stdio.h>
#include<unistd.h>
int main()
{
 int pid = fork();
 if( pid != 0)
 {
  printf("parent process\n"); 
 }
 else
 {
  sleep(10);
  printf("child process\n");
 }
}
