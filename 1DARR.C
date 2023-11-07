#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,n;
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
    printf("%d\t",arr[i]);
  }
  getch();
}