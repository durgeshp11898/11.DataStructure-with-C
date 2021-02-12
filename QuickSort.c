

#include <stdio.h>
int *generate(int n[],int num)
{
int i;
for(i=0;i<num;i++)
{
n[i]=rand()%100+1;
}
return(n);
}

void display(int n[],int num)
{
int i;
for(i=0;i<num;i++)
{
printf("\n %d" ,*(n+i));
}
}

void quicksort(int x[],int first,int last)
{
int pivot,j,tmp,i;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(x[j]>x[pivot] && i<last)
i++;
while(x[j]>x[pivot])
j++;
if(i<j)
{
tmp=x[i];
x[i]=x[j];
x[j]=tmp;
}
}
tmp=x[pivot];
x[pivot]=x[j];
x[j]=tmp;
quicksort(x,first,j-1);
quicksort(x,j-1,last);
}
}

main()
{
int n[100],num,*res;
printf("\n Enter the nos :");
scanf("%d",&num);
res=generate(n,num);
display(res,num);
quicksort(res,0,num-1);
printf("\n \n \n");
display(res,num);
}
