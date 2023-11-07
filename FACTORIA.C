//Factorail of n
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,value=1,i;
  clrscr();
  printf("Enter the number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    value=value*i;
  }
  printf("%d",value);
  getch();
}