#include <stdio.h>
#include "user_input_helpers.h"

int main(void) {
	int num;

	do {
		printf("enter number: ");
		validateIntegerInput(&num);
	} while(num < 0);

	for(int i = 0; i <= 10; i++) {
		printf("%i x %i = %i\n", num, i, num*i); 
	}

	return 0;
}
