#include<stdio.h>
#define MAX 20
typedef struct stack
{
  char data[MAX];
  int top;
} stack;

stack s;

void
init (stack * s)
{
  s->top = -1;
}

char
pop (stack * s)
{ 
  
  char x;
  x = s->data[s->top];
  s->top = s->top - 1;
  return x;
}

void
push (stack * s, char num)
{
  s->top = s->top + 1;
  s->data[s->top] = num;
}

void main()
{
int i;
char a[MAX],val;
init(&s);
printf("\nenter expression: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
push(&s,a[i]);
}
printf("\n reverse string is:  ");
for(i=0;a[i]!=0;i++)
{
val=pop(&s);
printf("%c",val);
}
}
