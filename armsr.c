#include <stdio.h>

int main(void) 
{
	int a,b,sum=0;
	scanf("%d",&a);
	b=a;
	while(a)
	{
		int r=a%10;
		sum=sum+(r*r*r);
		a=a/10;
	}
	if(sum==b)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("Not Amstrong number");
	}
	return 0;
}
