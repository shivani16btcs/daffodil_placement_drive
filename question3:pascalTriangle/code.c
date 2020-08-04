//question: pascal triangle


// please refer image which attach to this folder
// here we use combinaton formula: nCr=n!/((n-r)!*r!)
#include <stdio.h>
 
long factorial(int);
 
int main()
{
  int i, n, c;
 
  scanf("%d",&n);
 
  for (i = 0; i < n; i++)
  {
 
    for (c = 0 ; c <= i; c++)
      printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
 
    printf("\n");
  }
 
  return 0;
}
 
long factorial(int n)
{
  int c;
  long result = 1;
 
  for (c = 1; c <= n; c++)
    result = result*c;
 
  return result;
}
