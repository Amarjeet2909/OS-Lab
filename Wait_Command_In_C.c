#include <stdio.h>

int i=10;
void main()
{
int pid=fork();
if(pid==0)
{
printf("initial value of i %d \n ",i);
i+=10;
printf("value of i %d \n ",i);
printf("child terminated \n");
}
else
{
wait(0);
printf("value of i in parent process %d",i);
}
}
