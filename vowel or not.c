#include<stdio.h>
int main()
{
char c;
printf("enter the alphabet\n");
scanf("%c",c);
lowercase=(c=='a' || c=='e' || c=='i'||c=='o'||c=='u');
uppercase=(c=='A' || c=='E' || c=='I'||c=='O'||c=='U');
if(lowercase||uppercase)
{
printf("the alphebet is vowel");
}
else
{ 
printf("the alphabet is not vowel");
}
return 0;
}
