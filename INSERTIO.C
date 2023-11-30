#include<stdio.h>
#include<conio.h>
void insertion(int arr[],int len){
	 int i,key,j;
	 for(i=1;i<len;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	 }

	 for(i=0;i<len;i++){
		printf("%d\t",arr[i]);
	 }

}

void main(){
	int arr[100],len,i,j;
	clrscr();
	printf("Enter the length of array :\t");
	scanf("%d",&len);
	printf("Enter the array elements :\t");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	insertion(arr,len);
	getch();
}