//2. Write c program to display 1 to n using do while loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i=1;
  clrscr();
  printf("Enter a Positive Number: ");
  scanf("%d",&n);
  do
  {
    printf("%d\t",i);
    i++;
  }
  while(i<=n);
  getch();
}