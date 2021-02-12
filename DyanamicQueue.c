

#include<stdio.h>
#include<stdlib.h>
#include"dqueue.h"

main()
{
int n,ch;
do
{
printf("\n 1)add \n 2)delete \n 3)peek \n 4)exit");
printf("\n enter your choice : \n ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n enter element to add to the queue");
scanf("%d",&n);
addq(n);
break;

case 2:
if(isempty()==1)
printf("\n queue is empty");
else
{
printf("\n deleted element is %d",delq());
}
break;

case 3:
if(isempty()==1)
printf("\n queue is empty");
else
{
printf("\n peeked element is %d",peekq());
}
break;

case 4:
exit(1);
break;

default:
printf("\n invalid choice! ");
break;
}
}
while(ch!=4);
}
