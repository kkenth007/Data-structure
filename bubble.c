#include<stdio.h>
int a[5]={2,4,9,7,3};
int i,temp;

void swap(int x,int y){
	temp =  a[x];
	a[x]=a[y];
	a[y]=temp;
}
void print(){
		for(i=0;i<5;i++){
		printf("  %d",a[i]);
	}
}
main(){
	int ch = 1;//do dee
	while(ch == 1){//check
		ch=0;
		for(i=0;i<4;i++){//can't check 
			if(a[i] > a[i+1]){
			swap(i,i+1);
			ch=1;
			}
		}
	}
	print();
}
