#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "user_input_helpers.h"

int main(void) {
	int length, rangeEnd, rangeStart = 2;

	do {
		printf("range start: ");
		validateIntegerInput(&rangeStart);
	} while(rangeStart <= 1);

	do {
		printf("range end: ");
		validateIntegerInput(&rangeEnd);
	} while(rangeEnd <= rangeStart);
	
	int* sieve = calloc(rangeEnd + 1, sizeof(int));
	memset(sieve, 1, (rangeEnd + 1) * sizeof(int));	
	
	for(int i = rangeStart; i <= sqrt(rangeEnd); i++) {
		if(sieve[i]) {
			for(int j = i * i; j <= rangeEnd; j += i) {
				sieve[j] = 0;
			}
		}
	}

	for(int i = rangeStart; i <= rangeEnd; i++) {
		if(sieve[i]) {
			printf("%i, ", i);
		}
	}

	return 0;
}
