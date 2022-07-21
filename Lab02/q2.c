#include <stdio.h>

struct pkt {
	char ch1;
	char ch2[8];
	char ch3;
};


int main() {
	
	struct pkt packet;
	printf("Enter the number\n");
	scanf("%d",&packet.ch1);
	
	printf("Sent: %d\n",packet.ch1);

	int i=0;
	while (i < 8) {
		packet.ch2[i++] = packet.ch1 & 1;
		packet.ch1 >>= 1;
	}

	for (i=7;i>=0;i--){
		printf("%d ",packet.ch2[i]);
	}
	printf("\n");

	int xyz=0;
	for (i=0; i< 8; i++) {
		xyz += (1<<i) * packet.ch2[i];
	}
	packet.ch3 = xyz;

	printf("Recieved: %d\n",packet.ch3);
	return 0;
}
