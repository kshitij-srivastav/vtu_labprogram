#include<stdio.h>
#include<math.h>

int main()
{
  float n,s;
  int i;
  printf("Enter the number to find square root\n");
  scanf("%f",&n);
  if (n>0)
  {
  	s=n/2;
  	for(i=0;i<n;i++)
  		s=(s+(n/s))/2;
  	printf("Square root of %f is %f\n",n,s );
  }
  else
  	printf("Not possible to find square root\n");
}