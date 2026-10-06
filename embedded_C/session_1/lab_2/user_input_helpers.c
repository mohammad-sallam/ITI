#include "user_input_helpers.h"

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
