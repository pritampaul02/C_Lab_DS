#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i,j;
  clrscr();
  printf("Enter the value : ");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    for (j=0;j<=i;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  getch();
}