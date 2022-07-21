#include <stdio.h>

#define EXTRACT 0x000000FF

int main() {
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	unsigned char ch0 = num&EXTRACT;
	
	num >>= 8;
	unsigned char ch1 = num&EXTRACT;

	num >>= 8;
	unsigned char ch2 = num&EXTRACT;

	num >>= 8;
	unsigned char ch3 = num&EXTRACT;


	printf("[0] -> %d\n[1] -> %d\n[2] -> %d\n[3] -> %d\n",ch0,ch1, ch2, ch3);
	return 0;
}
