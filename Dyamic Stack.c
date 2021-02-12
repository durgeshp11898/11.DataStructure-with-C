

#include<stdio.h>
#include<stdlib.h>
#include"dystack.h"
struct node *s;
main()
{
int n,sw;
 s=initstack(s);
do
{
printf("\n Dynamic Stack Menu");
printf("\n Option........you press");
printf("\n -----------------------");
printf("\n PUSH               1");
printf("\n POP                2");
printf("\n DISPLAY            3");
printf("\n EXIT               0");
printf("\n----------------------");
printf("\n Enter your choice?");
scanf("%d",&sw);
switch(sw)
{
case 1:
printf("Enter the elements to be pushed");
scanf("%d",&n);
s=push(s,n);
break;

case 2;
if(isEmpty(s))
printf("\n stack is empty");
else
{
s=pop(s);
}

case 3:
if(isEmpty(s))
printf("Stack is empty....");
else
{
printf("Peeked element is: %d",peek(s));
}
break;

default:
printf("\n Invalid Input");
break;
}
}
while(sw!=4);
}

