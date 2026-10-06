#include <stdio.h>
#include "user_input_helpers.h"

int main(void) {
	int height;

	do {
		printf("height: ");
		validateIntegerInput(&height);
	} while(height <= 0);

	for(int i = 1; i <= height; i++) {
		for(int j = 1; j <= height-i; j++) {
			printf(" ");
		}

		for(int k = 1; k <= 2*i-1; k++) {
		       printf("*");
		}
 		printf("\n");		
	}

	return 0;
}
