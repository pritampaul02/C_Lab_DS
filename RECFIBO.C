//Write a program to find out n fibonacci number using recursive function
#include<stdio.h>
#include<conio.h>
int calc(int n);

void main()
{
  int result,val,i;
  clrscr();
  printf("Enter a value : ");
  scanf("%d",&val);
  for(i=1;i<=val;i++)
  {
    result = calc(i);
    printf("%d\n",result);
  }
  getch();
}
int calc(n)
{
  if(n==1)
    return 0;
  else if(n==2)
    return 1;
  return calc(n-1)+calc(n-2);

}