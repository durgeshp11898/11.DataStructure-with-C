

#include <stdio.h>
void *generate(int n[],int num)
{
int i;
for(i=0;i<num;i++)
{
n[i]=rand()%100;
}
return(n);
}

void display(int n[],int num)
{
int i;
for(i=0;i<num;i++)
{
printf("\n%d" ,n[i]);
}
}

void insertion_sort(int n[],int num)
{
int i,j,tmp;
for(i=0;i<num;i++)
{
j=i;
while(j>0 &&n[j]<n[j-1])
{
tmp=n[j];
n[j]=n[j-1];
n[j-1]=tmp;
j--;
}
}
}

main()
{
int n[100],num,*ans;
printf("\n enter the numbers :");
scanf("%d",&num);
ans=generate(n,num);
printf("the unsorted array elements are");
display(ans,num);
insertion_sort(ans,num);
printf("\n the sorted elements are");
display(ans,num);
}
