#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,n,sum=0;
  clrscr();
  printf("Enter the size of array : ");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
  {
    sum = sum + arr[i];
  }
  printf("sum of array = %d",sum);
  getch();
}