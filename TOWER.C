// The program to implement Tower of Hanoi
#include<stdio.h>
#include<conio.h>
void tower(int n,char A,char B,char C){
	if(n==0){
		return;
	}
	else{
		tower(n-1,A,C,B);
		printf("Move disk no - %d, %c -> %c\n",n,A,B);
		tower(n-1,C,B,A);
	}
}
void main(){
	int n=3;
	char from = 'A',to='B',help='C';
	clrscr();
	tower(n,from,help,to);
	getch();
}