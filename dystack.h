/*Disha Parichha
RollNo:87*/

#include<stdio.h>
#include<malloc.h>
struct dystack   /* dynamic stack*/
{
int nm;
struct dystack * next;
};
typedef struct dystack dstack;

int isEmpty(dstack *tp)
{
if(tp ==-1)
return 1;
else
return 0;
}
dstack * push(dstack * tp)
{
dstack *nrc = NULL;
nrc= (dstack *)malloc(sizeof(dstack));
if(nrc = NULL)
printf("\n Stack full...");
else
{
printf("Enter value to PUSH");
scanf("%d",&nrc -> nm);
nrc -> next = tp;
}
return nrc;
}
dstack * pop(dstack * tp)
{
dstack * tx = tp;
printf("\n Popped %d",tp -> nm);
tp = tp -> next;
free(tx);
return tp;
}
void display(dstack * tp)
{
printf("\n Top \n");
while(tp!= NULL)
{
printf("-> %d",tp-> nm);
tp=tp -> next;
}
}

