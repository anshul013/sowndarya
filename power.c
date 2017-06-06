
#include<stdio.h>
int main()
{
int base,exponent,counter,result=1;
printf("enter the base and exponent\n");
scanf("%d%d",& base,& exponent);
for(counter=0; counter < exponent; counter++)
{
result= result * base;
}
printf("%d%d=%d", base, counter, result);
return 0;
}
