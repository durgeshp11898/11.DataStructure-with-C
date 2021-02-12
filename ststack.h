/*Disha Parichha
RollNo:87*/


# include<stdio.h>
# define sz 5
typedef struct stack   /* static stack*/
{
int a[sz],top;
}
stack;
void init(stack * k)
{
k-> top = -1;
}
int isFull(stack *k)
{
return k ->top == sz-1;
}
int isEmpty(stack * k)
{
return k-> top == sz-1?1:0;
}
void push(stack * k,int n)
{
k-> top++;
k-> a[k ->top]=n;
}
int pop(stack * t)
{
return t -> a[t -> top--];
}
int peek(stack * t)
{
if(isEmpty(t)==1)
printf("Empty Stack....");
else
return t -> a[t -> top];
return 0;
}
void display(stack * t)
{
int id;
printf("\n Top \n");
for(id=t -> top;id>=0;id--)
printf("-> %d",t -> a[id]);
}
