#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[100],i,j,len,elm,get;
  clrscr();
  printf("Enter the length of the array\n");
  scanf("%d",&len);
  printf("Enter the array elements\n");
  for(i=0;i<len;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter an element for seach\n");
  scanf("%d",&elm);

 get = search(arr,elm,len);
 printf("The element is found on index %d",get);
  getch();
}

int search(int arr[],int elm,int len)
{
 int i = 0;
  for(i=0;i<len;i++)
  {
   if(arr[i] == elm)
     return i;

  }
  return -1;
}