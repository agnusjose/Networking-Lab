#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
char *args[]= {"./ex",NULL};
execvp(args[0],args);
printf("System call completed successfully");
}
