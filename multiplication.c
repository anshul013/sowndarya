#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter an integer to find multiplication table: ");
    scanf("%d",&a);
    for(b=1;b<=10;++b)
    {
        printf("%d * %d = %d\n", a, b,b*b);
    }
    return 0;
}
