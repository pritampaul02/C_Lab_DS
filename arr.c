#include<conio.h>
#include<stdio.h>

void trvs();

int main(){
	
	int arr[100],len,pos,val,option,n,i;
	printf("Enter the length of array: \n");
	scanf("%d",&len);
	
	if(len<=100){
		printf("Enter the array elements : \n");
		for(i=0;i<len;i++){
			scanf("%d",&arr[i]);
		}
	}
	else
		printf("Length should be under 100");
		
		
	/////-------------print array
	printf("Your array is :\n");
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	
	
	while(1){
		printf("\nEnter your choice:\n1. Traverse\n2. Insert\n3. Delete\n4. Exit\n");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				printf("Traverse :\n");
				trvs(arr,len);
				break;
			
			case 2:
				printf("Insert :\n");
				insElm(pos,val,arr,len);
				break;
				
			case 3:
				printf("Delete :\n");
				delElm(arr,len);
				break;
			case 4:
				printf("Exit...");
				return 0;
		}
	}
	
	return 0;
}



void trvs(int arr[],int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
}

void insElm(int pos,int val,int arr[],int len){
	int i;
	printf("Enter the Position :\t");
	scanf("%d",&pos);
	printf("Enter the value:\t");
	scanf("%d",&val);
	
	for(i=len+1;i>pos;i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = val;
	len = len+1;
	
	trvs(arr,len);
}


void delElm(int arr[],int len){
	int i,elm,pos=-1; //0
	
	
//	printf("Enter the index of deletion :\t");
//	scanf("%d",&pos);
	printf("Enter the value for deletion :\t");
	scanf("%d",&elm);

	for(i=0;i<len;i++){
		if (arr[i] == elm){
			pos = i;
		}
	}
	if(pos == -1){
		printf("Value not exist\n");
		break;
	}
	
	
	for(i=pos;i<len;i++){
		arr[i] = arr[i+1];
	}
	len = len-1;
	
	
	
	trvs(arr,len);
}




