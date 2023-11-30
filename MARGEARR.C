#include <stdio.h>
#include <conio.h>

void main()
{
  int arr[100], arr1[100], result[100], i, j, n, n1, len, l = 0, k;
  clrscr();
  printf("Enter first array size\n");
  scanf("%d", &n);
  printf("Enter First Sorted array\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the second array size\n");
  scanf("%d", &n1);
  printf("Enter the second sorted array\n");
  for (j = 0; j < n1; j++)
  {
    scanf("%d", &arr1[j]);
  }

  len = n + n1;
  i = j = 0;

  while (i < n && j < n1)
  {
    if (arr[i] < arr1[j])
    {
      result[l] = arr[i];
      i++;
    }
    else
    {
      result[l] = arr1[j];
      j++;
    }
    l++;
    k = l;
  }
  if (i >= n)
  {
    for (i = j; i < n1; i++)
    {
      result[k] = arr1[i];
      k++;
    }
  }
  else
  {
    for (i = j; i < n; i++)
    {
      result[k] = arr[i];
      k++;
    }
  }

  for (i = 0; i < len; i++)
  {
    printf("%d\t", result[i]);
  }

  getch();
}