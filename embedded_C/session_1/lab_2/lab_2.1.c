#include <stdio.h>
#include <ctype.h>
#include "user_input_helpers.h"

int main(void) {
	int rangeStart, rangeEnd;
	char selection;

	printf("start of range: ");
	validateIntegerInput(&rangeStart);
	
	printf("end of range: ");
	validateIntegerInput(&rangeEnd);

	if(rangeStart > rangeEnd) {
		int temp = rangeStart;
		rangeStart = rangeEnd;
		rangeEnd = temp;
	}

	do {
		printf("Even or Odd? (E/o): ");
		validateCharInput(&selection);
		selection = tolower(selection);
	} while(selection != 'e' && selection != 'o');
	
	switch(selection) {
		case 'e':
			for(int i = rangeStart; i <= rangeEnd; i++) {
				if(i % 2 == 0) {
					printf("%i ", i);
				}
			}
			break;
		case 'o':
			
			for(int i = rangeStart; i <= rangeEnd; i++) {
				if(i % 2 != 0) {
					printf("%i ", i);
				}
			}
			break;
	}
	return 0;
}
