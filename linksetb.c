

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int info;
  struct node *link;
};

struct node *insert (struct node *start, int data);
void search (struct node *start, int data);
void display (struct node *start);

void
main ()
{
  int ch, data;
  struct node *start = NULL;
  do
    {
      printf ("\n 1. Insert \n 2. Display \n 3. Search \n 4. Exit");
      printf ("\n Enter the choice : ");
      scanf ("\n%d", &ch);

      switch (ch)
	{
	case 1:
	  printf ("\n Enter the value to be inserted : ");
	  scanf ("\n%d", &data);
	  start = insert (start, data);
	  break;
	case 2:
	  display (start);
	  break;
	case 3:
	  printf ("\n Enter the value to be searched : ");
	  scanf ("%d", &data);
	  search (start, data);
	  break;
	case 4:
	 exit (1);
	default:
	  printf ("\n Invalid choice.");
	}
    }
  while (ch != 4);
}

struct node *
insert (struct node *start, int data)
{
  struct node *p, *tmp;
  tmp = (struct node *) malloc (sizeof (struct node));
  tmp->info = data;
  if (start == NULL || data < start->info)
    {
      tmp->link = start;
      start = tmp;
      return start;
    }
  else
    {
      p = start;
      while (p->link != NULL && p->link->info < data)
	p = p->link;
      tmp->link = p->link;
      p->link = tmp;
    }
  return start;
}

void
search (struct node *start, int data)
{
  struct node *p;
  int pos;
  if (start == NULL || data < start->info)
    {
      printf ("\n %d not found.", data);
      return;
    }

  p = start;
  pos = 1;

  while (p != NULL && p->info <= data)
    {
      if (p->info == data)
	{
	  printf ("\n %d found at position %d", data, pos);
	  return;
	}
      p = p->link;
      pos++;
    }
  printf ("\n %d not found", data);
}

void
display (struct node *start)
{
  struct node *q;
  if (start == NULL)
    {
      printf ("\n Empty \n");
      return;
    }
  q = start;
  printf ("\n List is : ");
  while (q != NULL)
    {
      printf ("\n %d", q->info);
      q = q->link;
    }
  printf ("\n");
}
