#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter the character");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U")
{
printf("It is vowel");
}
else
{
printf("It is not vowel");
}
getch();
}
