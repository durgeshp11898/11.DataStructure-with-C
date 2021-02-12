

#include<stdio.h>
#include<stdlib.h>

struct node
{ 
 int vertex;
 struct node *next;
};

struct node *list[10];

void
createlist(int n)
{
 int i, j, deg;
 struct node *temp, *newnode;
 for(i=0; i<n; i++)
   {
    list[i]=NULL;
    for(j=0; j<n; j++)
      {
       printf("\n Is there  an edge between v%d and v%d (1/0): ", i+1, j+1);
       scanf("%d", &deg);
       if(deg==1)
         {
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->vertex= j+1;
          newnode->next=NULL;
          if(list[i]==NULL)
            list[i]=temp=newnode;
          else
            {
             temp->next=newnode;
             temp=newnode;
            }
         }
      }
   }
}

void
displist(int n)
{
 struct node *temp;
 int i;
 printf("\n Adjacency List: \n");
 for(i=0; i<n; i++)
   {
    printf("\n v%d->", i+1);
    temp=list[i];
    while(temp)
       {
        printf("v%d->", temp->vertex);
        temp=temp->next;
       }
    printf("NULL");
  }
}

void
degree(int n)
{
 struct node *p;
 int i, cnt;
 printf("\n\n Outdegree\n");
 for(i=0; i<n; i++)
   {
    cnt=0;
    for(p=list[i]; p!=NULL; p=p->next)
    cnt++;
    printf("\n\n Outdegree of v%d in %d \n", i+1, cnt);
   }
}

int m[10][10];
main()
{
 int n;
 printf("\n How many vertices?!\n");
 scanf("%d", &n);
 if(n>=1)
   {
    createlist(n);
    displist(n);
    degree(n);
    printf("\n");
   }
 else
   {
    printf("\nNOT ALLOWED!!!\n");
   }
}

 
