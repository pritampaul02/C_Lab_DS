#include<stdio.h>
#include<conio.h>
void swap(x,y)
{
  x=x+y;
  y=x-y;
  x=x-y;
  printf("After Swaping : \n x = %d and y = %d\n",x,y);

}

void main()
{
  int x,y;
  clrscr();
  printf("Enter two values to Swap : ");
  scanf("%d%d",&x,&y);
  printf("Inputs : \n x = %d and y = %d\n",x,y);
  swap(x,y);
  getch();
}