#include<stdio.h>
int main()
{
    int low,high,i;
    printf("\nEnter lower limit");
    scanf("%d",&low);
    printf("\nEnter upper limit");
    scanf("%d",&high);
    for(i=low;i<=high;i++)
    {
        if((i%2)!=0)
        printf("\t%d",i);
    }
return 0;
}
