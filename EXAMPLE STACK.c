#include<stdio.h>
void main(){
	int data[5],top;
	int ch;
	ch=0;
	printf("EXAMPLE STACK");
	int temp;
	while(ch!=4){
		printf("\n 1 : Push\n 2 : Pop\n 3 : Peek\n 4 : Exit");
		printf("\n Enter Your Code : ");
		scanf("%d",&ch);
		switch(ch){
			case 1: if(top==4) printf("\n\n Stack is Full");
					else{
						printf("\n\n Enter Data: ");
						scanf("%d",&temp);
						data[++top]=temp;
					}
					break;
			case 2: if(top ==-1)
			printf("Stack is Empty");
					else{
						printf(" Pop Element : %d",data[top]);
						top--;
					}
					break;
			case 3: if(top == -1)
			printf("Stack is Empty");
					else{
						printf(" Peek Element : %d",data[top]);
					}
					break;
			default : printf("\n Not a good choice");
			break;
		}
		
	}
}