#include<stdio.h>
typedef struct node
{
  int vertex;
  struct node *next;
} node;

node *list[10];

node
createmat (int m[10][10], int n)
{
  int i, j;
  char ans;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  m[i][i] = 0;
	  if (i != j)
	    {
	      printf ("\n Is there an edge between %d and %d (1/0) : ", i + 1,
		      j + 1);
	      scanf ("%d", &m[i][j]);
	    }
	}
    }
}

void
dispmat (int m[10][10], int n)
{
  int i, j;
  printf ("\n The adjacency matrix is : \n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	printf ("%5d", m[i][j]);
      printf ("\n");
    }
}

void
createlist (int m[10][10], int n)
{
  int i, j;
  struct node *temp, *newnode;
  for (i = 0; i < n; i++)
    {
      list[i] = NULL;
      for (j = 0; j < n; j++)
	{
	  if (m[i][j] == 1)
	    {
	      newnode = (node *) malloc (sizeof (node));
	      newnode->vertex = j + 1;
	      newnode->next = NULL;
	      if (list[i] == NULL)
		list[i] = temp = newnode;
	      else
		{
		  temp->next = newnode;
		  temp = newnode;
		}
	    }
	}
    }
}

void
displist (int n)
{
  struct node *temp;
  int i;
  printf ("\n The adjacency list is : \n ");
  for (i = 0; i < n; i++)
    {
      printf ("\n V%d -> ", i + 1);
      temp = list[i];
      while (temp)
	{
	  printf ("V%d -> ", temp->vertex);
	  temp = temp->next;
	}
      printf ("NULL \n");
    }
}

void
main ()
{
  int m[10][10], n;
  printf ("\n Enter the number of vertices : ");
  scanf ("\n%d", &n);
  createmat (m, n);
  dispmat (m, n);
  createlist (m, n);
  displist (n);
}
