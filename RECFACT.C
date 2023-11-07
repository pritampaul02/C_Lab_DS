//Write  a program to find out factorial of n using recursive function
#include<stdio.h>
#include<conio.h>
int calc(int n);

void main()
{
  int fact,result;
  clrscr();
  printf("Enter the value of n : ");
  scanf("%d",&fact);
  result=calc(fact);
  printf("%d",result);
  getch();
}
int calc(n)
{
  if(n==0)
    return 1;
  return n * calc(n-1);
}