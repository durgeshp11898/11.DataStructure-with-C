#include<stdio.h>
#include"cstqueue.h"
void
main ()
{
  void add (int);
  void del ();
  void display ();
  int ch, i, n;
  do
    {
      printf ("\n\n MENU :");
      printf ("\n 1. Insertion \n 2. Deletion \n 3. Display \n 4. Exit");
      printf ("\n Enter your choice : ");
      scanf ("%d", &ch);

      switch (ch)
	{
	case 1:
	  printf ("\n Enter the element to be added : ");
	  scanf ("%d", &n);
	  add (n);
	  break;
	case 2:
	  printf ("\n Deleted element is %d");
	  del ();
	  break;
	case 3:
	  printf ("\n Elements in circular queue are = ");
	  display ();
	  break;
	default:
	  printf ("\n Invalid Choice");
	}
    }
  while (ch != 4);
}
