#include<stdio.h>
#include<conio.h>
void bubble(int arr[],int len){
	int i,j,temp;
	for(i=0;i<len;i++){
		for(j=1;j<len;j++){
			if(arr[j-1]>arr[j]){
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}

		}

	}
	for(i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}

}
void main(){
	int arr[100],len,i,j,temp;
	clrscr();
	printf("Enter the length of array :\t");
	scanf("%d",&len);
	printf("Enter the array Elements :\t");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	bubble(arr,len);
	getch();
}

