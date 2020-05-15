#include<stdio.h>

int
isprime (int n)
{

  int i;
  if (n == 1 || n == 0)
    {
      return 0;
    }
  for (i = 2; i < n / 2; i++)
    {
      if (n % i == 0)
	{
	  return 0;
	}
    }

  return 1;
}

int main ()
{
  int f, n;

  printf ("Enter the number: ");
  scanf ("%d", &n);


  f = isprime (n);
  if (f)
    {
      printf ("%d is a prime.\n", n);
    }
  else
    {
      printf ("%d is not a prime.\n", n);
    }
  return 0;
}
