#include<stdio.h>
#include<conio.h>
int tailFact(int n,int result){
	if(n==1)
		return result;
	else
		return tailFact(n-1,n*result);

}

void main(){
	int n,result=1,get;
	clrscr();
	printf("Enter the number to Factorial:\t");
	scanf("%d",&n);
	get = tailFact(n,result);
	printf("%d",get);
	getch();
}