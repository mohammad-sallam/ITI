#include <stdio.h>

void validateIntegerInput(int * digit);
void validateCharInput(char * letter);

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
		printf("Even or Odd? (E/O): ");
		validateCharInput(&selection);
	} while(selection != 'E' && selection != 'O');
	
	switch(selection) {
		case 'E':
			for(int i = rangeStart; i <= rangeEnd; i++) {
				if(i % 2 == 0) {
					printf("%i ", i);
				}
			}
			break;
		case 'O':
			
			for(int i = rangeStart; i <= rangeEnd; i++) {
				if(i % 2 != 0) {
					printf("%i ", i);
				}
			}
			break;
	}
	return 0;
}

void validateIntegerInput(int * digit) {
	while(scanf(" %d", digit)==0) {
		printf("Please enter a valid integer.\n");
		int c;
		while((c=getchar())!='\n' && c!=EOF);
	}	
}

void validateCharInput(char * letter) {

	while(scanf(" %c", letter)==0) {
		printf("Please enter a valid character.\n");
		int c;
		while((c=getchar())!='\n' && c!=EOF);
	}	
}
