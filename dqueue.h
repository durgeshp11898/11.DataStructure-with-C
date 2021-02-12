/*Disha Parichha
RollNo:87*/

#include<stdio.h>
#include<stdlib.h>

struct queue
{
int item;
struct queue *next;
}*front,*rear;

void initq()
{
front=rear=NULL;
}

void addq(int num)
{
struct queue *tmp;
tmp=(struct queue*)malloc(sizeof(struct queue));
tmp->item=num;
tmp->next=NULL;
if(front==NULL)
{
rear=front=tmp;
}
else
{
rear->next=tmp;
rear=tmp;
}
}

int delq()
{
int num;
struct queue *tmp= front;
num=front->item;
front=front->next;
free(tmp);
if(front==NULL)
rear=NULL;
return(num);
}

int peekq()
{
int num;
num=front->item;
return(num);
}

int isempty()
{
return(front == NULL);
}
