

#include<stdio.h>
#include<stdlib.h>

void
creatematrix(int m[10][10], int n)
{
 int i, j;
 for(i=0; i<n; i++)
   {
    for(j=0; j<n; j++)
      {
       m[i][j]=0;
       printf("\n Is there an edge between  vertices v%d and v%d (1/0): ", i+1, j+1);
       scanf("%d", &m[i][j]);
      }
   }
}

void
dispmatrix(int m[10][10], int n)
{
 int i, j;
 printf("\n\t Adjacency Matrix: \n");
 for(i=0; i<n; i++)
   {
    for(j=0; j<n; j++)
      {
       printf("%d", m[i][j]);
      }
    printf("\n");
  }
}

void
degree(int m[10][10], int n)
{
 int v, i, sumin, sumout;
 printf("\n\t Vertex Indegree Outdegree Total Degree ");
 for(v=0; v<n; v++)
   {
    sumin=0;
    sumout=0;
    for(i=0; i<n; i++)
      {
       sumin+=m[i][v];
       sumout+=m[v][i];
      }
    printf("\n\t v%d %d %d %d", v+1, sumin, sumout, sumin+sumout);
  }
}

int m[10][10];
main()
{
 int n;
 printf("How many vertices does your graph have?! ");
 scanf("%d", &n);
 if(n>=1)
  {
   creatematrix(m,n);
   dispmatrix(m,n);
   degree(m,n);
   printf("\n \n");
  }
 else
  {
   printf("\nNOT ALLOWED\n");
  }
}
