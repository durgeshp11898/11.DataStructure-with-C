

#include<stdio.h>
#include<stdlib.h>
typedef struct bnode
{
  int data;
  struct bnode *left, *right;
} bnode;
bnode *
insert (bnode * t, int x)
{
  bnode *r;
  if (t == NULL)
    {
      r = (bnode *) malloc (sizeof (bnode));
      r->data = x;
      r->left = NULL;
      r->right = NULL;
      return r;
    }
  if (x > t->data)
    {
      t->right = insert (t->right, x);
      return t;
    }
  else if (x < t->data)
    {
      t->left = insert (t->left, x);
      return t;
    }
  else
    return t;
}

bnode *
create ()
{
  int n, x, i;
  bnode *root;
  root = NULL;
  printf ("\nEnter number of nodes : ");
  scanf ("%d", &n);
  printf ("\n Enter tree values : ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &x);
      root = insert (root, x);
    }
  return root;
}

bnode *
delete (bnode * t, int x)
{
  bnode *temp;
  if (t == NULL)
    {
      printf ("\n Element not found.");
      return t;
    }
  if (x < t->data)
    {
      t->left = delete (t->left, x);
      return t;
    }
  if (x > t->data)
    {
      t->right = delete (t->right, x);
      return t;
    }
  if (t->left == NULL && t->right == NULL)
    {
      temp = t;
      free (temp);
      return NULL;
    }
  if (t->left == NULL)
    {
      temp = t;
      t = t->right;
      free (temp);
      return t;
    }

  if (t->right == NULL)
    {
      temp = t;
      t = t->left;
      free (temp);
      return t;
    }
  temp = t->right;
  while (temp->left != NULL)
    temp = temp->left;
  t->data = temp->data;
  t->right = delete (t->right, temp->data);
  return t;
}

bnode *
search (bnode * root, int x)
{
  while (root != NULL)
    {
      if (x == root->data)
	return root;
      if (x > root->data)
	root = root->right;
      else
	root = root->left;
    }
  return NULL;
}

void
preorder (bnode * t)
{
  if (t != NULL)
    {
      printf ("%d\t", t->data);
      preorder (t->left);
      preorder (t->right);
    }
}

void
postorder (bnode * t)
{
  if (t != NULL)
    {
      postorder (t->left);
      postorder (t->right);
      printf ("%d\t", t->data);
    }
}

void
inorder (bnode * t)
{
  if (t != NULL)
    {
      inorder (t->left);
      printf ("%d\t", t->data);
      inorder (t->right);
    }
}

int
count (bnode * t)
{
  int i;
  if (t == NULL)
    return 0;
  i = 1 + count (t->left) + count (t->right);
  return i;
}
