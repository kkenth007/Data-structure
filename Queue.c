#include <stdio.h>
int e,i,q[5]; //Global variable
int max = 5, count = 0;
int a = 10, b = 20, c = 30,d = 40;

void enque(int x) {
  if (count < max) {
    q[count] = x;
    count++;
  }
}

void print() {
  for (i = 0; i < count; i++) {
    printf(" %d", q[i]);
  }
}

main() {
	enque(a);
	enque(b);
	enque(c);
	enque(d);
	print();
	e = q[0];
	count--; //count=3
	printf("\nRemove");
	print();  
}
