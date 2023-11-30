#include<stdio.h>
#include<conio.h>
void selection(int arr[],int len){
	int i,j,temp,minInd;
	for(i=0;i<len-1;i++){
		minInd = i;
		for(j=i+1;j<len;j++){
			if(arr[minInd] > arr[j]){
				minInd = j;
			}
		}
		if(minInd != i){
			temp = arr[i];
			arr[i] =arr[minInd];
			arr[minInd] = temp;
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
	selection(arr,len);
	getch();
}

