#include<stdio.h>
#include<conio.h>

 void trvs();
//int ins();
//int del();

int main(){
	int n,i,input,arr[100];

///////--------Taking length of array from user ****
	printf("Enter the length of array :\t");
	scanf("%d",&n);

//////---------Taking array elements from user ***
	printf("Enter your array elements:\t");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

//////---------Printing array ***
	printf("Your inserted array is :\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);

//////---------Taking user Choice ***
	printf("\nEnter your choice\n 1. Traverse \n 2. Insert \n 3. Delete \n 4. Exit \n");
		scanf("%d",&input);


while(1){
	switch(input){
		case 1:
			printf("Traverse:\n");
//			trvs(arr,n);
			break;
		case 2:
			//ins();
			printf("Insert");
			break;
		case 3:
			//del();
			printf("delete");
			break;
		case 4:
			break;

	}

	return 0;

}

//void trvs(int n,int arr[]){
//	int i;
//	for(i=0;i<n;i++)
//		printf("%d",&arr[i]);
//
}
