

#include<stdio.h>
#include"singlylist.h"

main ()
{
  int n, num, p;
  do
    {
      printf ("1.Create\n");
      printf ("2.Insert\n");
      printf ("3.Search\n");
      printf ("4.Delete\n");
      printf ("5.Display\n");
      printf ("6.Length\n");
      printf ("7.Exit\n");
      printf ("Enter your choice :\n");
      scanf ("%d", &n);

      switch (n)
	{

	case 1:
	  printf ("Enter the number of nodes\n");
	  scanf ("%d", &num);
	  h = create (num);
	  break;

	case 2:
	  printf ("Enter the position to be inserted\n");
	  scanf ("%d", &p);
	  h = insert (h, p);
	  break;

	case 3:
	  printf ("Enter data to be searched\n");
	  scanf ("%d", &p);
	  num = search (h, p);
	  if (num == 0)
	    {
	      printf ("Not found\n");
	    }
	  else
	    {
	      printf ("Found at %d\n", num);
	    }
	  break;

	case 4:
	  h = deletedata (h);
	  break;

	case 5:
	  display (h);
	  break;

	case 6:
	  p = length (h);
	  printf ("Length is : %d\n", p);
	  break;

	case 7:
	  exit (0);

	default:
	  printf ("Invalid choice,Please enter valid choice\n");
	}
    }
  while (n);
}
