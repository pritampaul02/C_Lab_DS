#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,n,big=arr[0],small=arr[0];
  clrscr();
  printf("Enter the size of array : ");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }

  //--------------Biggest finding

  for(i=0;i<n;i++)
  {
    if(big<arr[i])
      big = arr[i];
    if(small>arr[i])
      small = arr[i];
  }
  printf("Big = %d\n",big);
  printf("Small = %d\n",small);

  getch();
}