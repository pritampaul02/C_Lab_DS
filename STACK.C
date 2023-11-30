// Stack implementation
#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 100
int top = -1;
int stack[MAX_SIZE];

void push(){
	int data;
	if(top == MAX_SIZE -1){
		//printf("\033[0;31m");
		printf("Error : Stack is overflow\n");
		//printf("\033[0m");
	}
	else{
		printf("Enter element to insert : \n");
		scanf("%d",&data);
		stack[++top]=data;
	}
}

void pop(){
	if(top == -1){
		//printf("\033[0;31m");
		printf("Error : Stack is underflow");
		//printf("\033[0m");
	}
	else{
		//printf("\033[0;32m");
		printf("Deleted item is %d \n",stack[top]);
		return stack[top--];
		//printf("\033[0m");
	}

}

void display(){
	int i;
	if(top == -1){
		//printf("\033[0;31m");
		printf("Error : Stack is Empty \nNothing to display\n");
		//printf("\033[0m");
	}
	else{
		for(i = top;i>=0;i--){
			//printf("\033[0;32m");
			printf("%d\n",stack[i]);
			//printf("\033[0m");
		}
		printf("\n");
	}
}

void main(){
	int choice;
	clrscr();
	while(1){
		printf("\nEnter 1 for traverse : \n");
		printf("Enter 2 for insert : \n");
		printf("Enetr 3 for Delete : \n");
		printf("Enter 4 for Exit : \n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				display();
				break;
			case 2:
				push();
				break;
			case 3:
				pop();
				break;
			case 4:
				printf("Exit...");
				return;
			default :
				printf(" Error : wrong choice !");
				break;

		}
	}
}