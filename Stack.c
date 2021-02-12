/*Disha Parichha
RollNo:87*/

#include<stdio.h>
#include"ststack.h"
void main()
{
int ch,n;
stack tp;
init(&tp);
do
{
printf("\n Static Stack Menu");
printf("\n Option.......You press");
printf("\n------------------------");
printf("\n PUSH             1");
printf("\n POP              2");
printf("\n DISPLAY          3");
printf("\n PEEK             4");
printf("\n EXIT             0");
printf("\n -------------------");
printf("\n Enter your choice?");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(isFull(&tp) == 1)
printf("Stack is full...");
else
{
printf("Value ? to push");
scanf("%d",&n);
push(&tp,n);
}
break;
case 2:
if(isEmpty(&tp)==1)
printf("Stack is empty...");
else
printf("Popped %d",pop(&tp));
break;
case 3:
display(&tp);
break;
case 4:
printf("Peeked %d",peek(&tp));
break;
}
printf("\n");
}
while(ch!=0);
}


