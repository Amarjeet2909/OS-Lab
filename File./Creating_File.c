#include <stdio.h>

void main()
{
int id;
if(id=creat("z.txt",0)==-1)
{
printf("cannot create the file");
exit(1);
}
else
{
printf("file is created");
exit(1);
}
}