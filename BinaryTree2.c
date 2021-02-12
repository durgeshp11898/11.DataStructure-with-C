

#include<stdio.h>
#include<stdlib.h>
#include"btree.h"

void
main ()
{
  bnode *root = NULL, *p;
  int x, ch, c;
  do
    {
      printf ("\n MENU ");
      printf
	("\n 1. Create \n 2. Insert  \n 3. Search \n 4. Preorder \n 5. Postorder \n 6. Inorder \n 7. Count of nodes \n 8. Exit");
      printf ("\n Enter your choice : \n");
      scanf ("%d", &ch);

      switch (ch)
	{
	case 1:
	  root = create ();
	  break;
	case 2:
	  printf ("\n Enter key to be inserted : ");
	  scanf ("%d", &x);
	  root = insert (root, x);
	  break;
	case 3:
	  printf ("\n Enter key to be searched : ");
	  scanf ("%d", &x);
	  p = search (root, x);
	  if (p == NULL)
	    printf ("\n Not Found!");
	  else
	    printf ("\n Found");
	  break;
	case 4:
	  preorder (root);
	  break;
	case 5:
	  postorder (root);
	  break;
	case 6:
	  inorder (root);
	  break;
	case 7:
	  c = count (root);
	  printf ("\n The number of nodes in the tree are  %d", c);
	  break;
	case 8:
	  break;
	default:
	  printf ("\n Invalid Choice.");
	}
    }
  while (ch != 8);
}
