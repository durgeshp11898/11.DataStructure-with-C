/*Disha Parichha
RollNo:87*/


#include<stdio.h>
void generate(int a[],int n);
void linear(int a[10],int n);
void main()
{
int a[20],id,n=0;
do
{
printf("How many elements do you want to enter:");
scanf("%d",&n);
}
while(n<=0);
generate(a,n);
printf("element list is");
for(id=0;id<n;id++)
{
printf("%d \t \n",a[id]);
}
linear(a,n);
}
void generate(int a[],int n)
{
int id;
for(id=0;id<n;id++)
{
a[id]=rand () % 100;
}
}

void linear(int a[20],int n)
{
int found =1,id,x;
printf("Enter the element you want to search :");
scanf("%d",&x);
for(id=0;id<n;id++)
{
if(x==a[id])
{
printf("key found");
printf("position of key is %d",id+1);
found=1;
}
}
if(found== 0)
printf("key not found");
}

