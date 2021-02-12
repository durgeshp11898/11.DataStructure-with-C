


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct city
{
char cname[20];
int stdcode;
}record;
record ct[100];
int linear(record * c,char nm[],int n)
{
int found = 1,id;
for(id=0;id<=n;id++)
{
if(strcmp(nm,c[id],cname)==0)
{
return id;
}
}return -1;
}
int readFILE(record *c)
{
int i=0;
FILE*fp;
fp=fopen("city.txt","r");
if(fp!=NULL)
{
while(!feof(fp))
{
fscanf(fp,"%s %d",c[i].cname,&c[i].stdcode);
i++;
}
}
fclose(fp);
return i-1;
}

void main()
{
int n;
char cn[20];
n = readFILE(ct);
printf("\n Enter the city name?");
scanf("%s",cn);
n = linear(ct,cn,n);
if(n==1)
printf("city not found...");
else
printf("city STD code is %d",ct[n].stdcode);
}
