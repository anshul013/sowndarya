#include <stdio.h>
 
int main()
{
  int c, a, fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &a);
 
  for (c = 1; c <= a; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", a, fact);
 
  return 0;
}
