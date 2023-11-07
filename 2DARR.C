#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100][100],i,j,m,n;
  clrscr();
  printf("Enter the size of 2d array : ");
  scanf("%d%d",&m,&n);
  printf("Enter the array elements : ");
  for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
	 scanf("%d",&arr[i][j]);
       }
       printf("\n");
    }


  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
       {
	 printf("%d ",arr[i][j]);
       }
      printf("\n");

  }

  getch();
}