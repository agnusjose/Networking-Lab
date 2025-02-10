#include<stdio.h>
void main()
{
int bsize,data,reduc,n,current=0;
printf("Enter bucket size:");
scanf("%d",&bsize);
printf("Enter number of data to be reduced:");
scanf("%d",&reduc);
printf("Enter number of data to be added to the bucket:");
scanf("%d",&n);
while(n!=0)
{
printf("Enter data:");
scanf("%d",&data);
if(data<0)
{
printf("Invalid input\n");
}
if(data<=(bsize-current))
{
printf("Current water level = %d\n",current+data);
current=(current+data)-reduc;
printf("Water level after leaking = %d\n",current);
}
else
{
if(current<bsize)
{
printf("Droping %d from bucket\n",data-(bsize-current));
printf("Current water level = %d\n",bsize);
current=bsize-reduc;
printf("Water level after leaking = %d\n",current);
}
}
n--;
}
}
