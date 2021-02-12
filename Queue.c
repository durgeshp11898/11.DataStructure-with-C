


#include<stdio.h>
#include<stdlib.h>
#include"stqueue.h"

main()
{
int n,ch;
queue q1;
initq(&q1);
do
{
printf("\n 1)add \n 2)delete \n 3)peek \n 4)exit");
printf("\n enter your choice : \n ");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(isfullq(&q1))
printf("\n queue is full");
else
{
printf("\n enter element to be inserted");
scanf("%d",&n);
addq(&q1,n);
}
break;
case 2:
if(isempty(&q1)==1)
printf("\n queue is empty");
else
{
printf("\n deleted element is %d",delq(&q1));
}
break;

case 3:
if(isempty(&q1)==1)
{
printf("\n queue is empty");
}
else
{
printf("\n peeked element is %d",peekq(&q1));
}
break;
case 4:
exit(1);
break;

default:
printf("\n invalid input. try again");
break;
}
}
while(ch!=4);
}
