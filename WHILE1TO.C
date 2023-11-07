//1. Write c program to display 1 to n usinng while loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i=1;
  clrscr();
  printf("Enter a Positive Number: ");
  scanf("%d",&n);
  while(i<=n)
  {
    printf("%d\t",i);
    i++;
  }
  getch();
}