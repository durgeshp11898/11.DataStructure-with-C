/*Disha Parichha
RollNo:87*/

#include<stdlib.h>
#include<stdio.h>

struct node
{
  struct node *next, *prev;
  int info;
}
 *h, *head, *last, *t;

struct node *
create (int n)
{
  int count;
  struct node *head, *last;

  head = ((struct node *) malloc (sizeof (struct node)));
  last = head;
  head->prev = NULL;
  printf ("Enter info for node 1\n");
  scanf ("%d", &head->info);

  for (count = 1; count < n; count++)
    {
      last->next = ((struct node *) malloc (sizeof (struct node)));
      last->next->prev = last;
      last = last->next;
      printf ("Enter info for node %d:\n", count + 1);
      scanf ("%d", &last->info);
    }
  last->next = NULL;
  return head;
}

struct node *
insert (struct node *head, int p)
{
  int i;
  struct node *t;
  if (p > length (head) && p <= 0)
    {
      printf ("Invalid position\n");
      return head;
    }
  else
    {
      last = ((struct node *) malloc (sizeof (struct node)));
      printf ("Enter the info for newnode:\n");
      scanf ("%d", &last->info);
      if (p == 1)
	{
	  last->next = head;
	  last->prev = NULL;
	  head->prev = last;
	  head = last;
	  return head;
	}
      else
	{
	  for (t = head, i = 1; i <= p - 2; i++)
	    t = t->next;
	  last->next = t->next;
	  t->next = last;
	  last->prev = t;
	  return head;
	}
    }
}

int
search (struct node *head, int data)
{
  int key = 0;
  struct node *last = head;
  for (key = 1, last = head; last != NULL; last = last->next)
    {

      if (last->info == data)
	return key;
      else
	{
	  key++;
	}
    }
  return 0;
}

void
display (struct node *head)
{
  printf ("The data is:\n");
  while (head != NULL)
    {
      printf ("%d\t", head->info);
      head = head->next;
    }
  printf ("\n");
}

int
length (struct node *head)
{
  int count = 0;
  while (head != NULL)
    {
      count++;
      head = head->next;
    }
  return count;
}


/*struct node *
deletedata (struct node *head)
{
  int i, p, a;
  struct node *last = head, *s;
  printf ("Enter data to be deleted\n");
  scanf ("%d", &p);
  a = search (head, p);
  if (a == 0)
    {
      printf ("Invalid data\n");
      return head;
    }
  else
    {
      if (a == 1)
	{
	  head = head->next;
	  free (last);
	  head->prev = NULL;
	  return head;
	}
      else
	{
	  for (i = 1, last = head; i <= a - 1; i++)
	    last = last->next;
	  last->prev->next = last->next;
	  if (last->next != NULL)
	    last->next->prev = last->prev;
	  free (s);
	  return head;
	}
    }
}

*/
struct node *
deletedata (struct node *head)
{
  int i, p, a;
  struct node *last = head, *s;
  printf ("Enter data to be deleted\n");
  scanf ("%d", &p);
  a = search (head, p);
  if (a == 0)
    {
      printf ("Invalid data\n");
      return head;
    }
  else
    {
      if (a == 1)
	{
	  head = head->next;
	  free (last);
	  return head;
	}
      else
	{
	  for (i = 1, last = head; i <= a - 2; i++)
	    last = last->next;
	  s = last->next;
	  last->next = s->next;
	  free (s);
	  return head;
	}
    }
}
