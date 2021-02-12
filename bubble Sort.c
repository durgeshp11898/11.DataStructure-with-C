

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

void bubble_sort(int n[],int num)
{
int i,j,temp;
for(i+0;i<(num-1);i++)
{
for(j=0;j<(num-i-1);j++)
{
if(n[j]>n[j+1])
{
temp=n[j];
n[j]=n[j+1];
n[j+1]= temp;
}
}
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
