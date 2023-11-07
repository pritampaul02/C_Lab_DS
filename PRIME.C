//Prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,flag=0;
  clrscr();
  printf("Enter a number to Check : ");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      flag=1;
    }
  }
  if(flag==1)
    printf("The Number is not a Prime Number");
  else
    printf("The number is prime");
  getch();
}