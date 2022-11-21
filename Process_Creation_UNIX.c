#include <stdio.h>

void main()
{
int id;
id=fork();
if(id<0)
{
Printf("cannot create the file");
exit(-1);
}
if(id==0)
{
Printf("child process");
exit(0);
}
else
{
Printf("parent process");
}
}
