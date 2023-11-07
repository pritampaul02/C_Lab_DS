//Add two number using function
#include<stdio.h>
#include<conio.h>

void sum(a,b)
{
  printf("%d+%d=%d",a,b,a+b);
}

void main()
{
 int a,b;
 clrscr();
 printf("Enter two numbers : ");
 scanf("%d%d",&a,&b);
 sum(a,b);
 getch();
}


