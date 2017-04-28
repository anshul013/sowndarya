#include<stdio.h>
int main()
{
    char a;
    printf("enter the value\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {printf("the given is vowel");}
    else
    {printf("the given is consonant");}
}
