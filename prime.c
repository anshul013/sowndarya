//This program is to find if the inserted number is prime or not.
#include <stdio.h>
int main()
{
  int n, i, f=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  if(n!=1)
  {
      for(i=2;i<=n/2;++i)
      {
            if(n%i==0)
            {
                f=1;
                break;
            }
      }
      if (f==0)
          printf("%d is a prime number.",n);
      else
          printf("%d is not a prime number.",n);
  }
  else
  {
       printf("%d is neither a prime nor a composite number.",n);
  }
   return 0;
}
