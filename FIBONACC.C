#include<stdio.h>
#include<conio.h>
void main()
{
  int num1=0,num2=1,num3,i,n;
  clrscr();
  printf("Enter the value of n : ");
  scanf("%d",&n);
  printf("%d\t%d\t",num1,num2);
  for(i=0;i<n-2;i++)
  {
    num3=num1+num2;
    printf("%d\t",num3);
    num1=num2;
    num2=num3;
  }
  getch();
}