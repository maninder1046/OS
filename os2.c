//program inwhich parent process compute even sum and child process compute odd sum stored in an array  using fork() function 

#include<stdio.h>
#include<unistd.h>
int main()
{
 int odd_sum=0,even_sum=0;
 int arr[10]= {1,2,3,4,5,6,7,8,9,10};
 int pid = fork();
 if( pid != 0)
 {
   for(int i = 0;i < 10 ; i++)
   {
     if(arr[i]%2 != 0)
       odd_sum= odd_sum + arr[i];
   }
   printf("child process :\n");
   printf("odd sum :%d \n",odd_sum);
 }
 else{
 for(int i = 0;i < 10 ; i++)
   {
     if(arr[i]%2 == 0)
       even_sum= even_sum + arr[i];
   }
   printf("parent process :\n");
   printf("even sum :%d \n",even_sum);
 }
}
