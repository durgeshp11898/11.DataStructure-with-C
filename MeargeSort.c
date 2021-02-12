

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
printf("\n%d" ,*(n+i));
}
}

void mergesort(int x[],int end,int start)
{
int j=0;
const int size=start-end+1;
int mid=0;
int mrg1=0;
int mrg2=0;
int ex[100];

if(end==start)
return;
mid=(end+start)/2;
mergesort(x,mid,end);
mergesort(x,start,mid+1);
for(j=0;j<size;j++)
{
if(mrg2 <=start-end)
if(mrg1 <=mid-end)
if(ex[mrg1]>ex[mrg2])
x[j=end]=ex[mrg2++]
else
x[j+end]=ex[mrg1++];
else
x[j+end]=ex[mrg2++];
else
x[j+end}=ex[mrg1++];
}
}

main()
{
int n[100],num,*ans;
printf("\n Enter the nos :");
scanf("%d",&num);
ans=generate(n,num);
display(ans,num);
bubble_sort(ans,num);
printf("\n \n \n");
display(ans,num);
}
