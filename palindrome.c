#include<stdio.h>
int main()
{
    int n,t,reverse=0,r;
    printf("Enter Number: ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        reverse=(reverse*10)+r;
        n=n/10;
    }
    if(t==reverse)
    printf("Number %d is Palindrome\n",t);
    else
    printf("Number %d is not Palindrome\n",t);
    return 0;
}
 
