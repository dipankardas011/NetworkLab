#include <stdio.h>

#define PROOF 0xf231413f

int convertion() {
	int conv = PROOF;

	return ( (conv&0xff)<<24 ) | ( (conv&0xff00)<<8 ) | ( (conv&0xff0000)>>8 ) | ( (conv&0xff000000)>>24 );
}


int main() {
	
	char pos_01 = (char)PROOF;
	printf("org-> 0x%x\n",PROOF);

	if (pos_01 == 0x3f) {
		printf("Little Endian\n");
		char checkEnd = (char)convertion();
		printf("New -> 0x%x\n",convertion());

		printf("Changed to Big Endian\n");
	}
	else {
		printf("Big Endian\n");
		char checkEnd = (char)convertion();
		printf("New -> 0x%x\n",convertion());
		printf("Changed to Little Endian\n");

	}

	return 0;
}
