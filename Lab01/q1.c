#include <stdio.h>

void swap(char** a, char** b) {
	char* t = *a;
	*a = *b;
	*b = t;
}

int main(int argc, char** argv) {

	char *a = argv[1];
	char *b = argv[2];

	printf("((BEFORE))a=%s\tb=%s\n",a,b);
	swap(&a,&b);
	printf("((AFTER))a=%s\tb=%s\n",a,b);


	return 0;
}
