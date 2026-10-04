#include <stdio.h>
#include <math.h>
#include <ctype.h>

void validateIntegerInput(int * digit) {
    while(scanf(" %d", digit)==0) {
        printf("Please enter a valid integer.\n");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
}

int main() {
    int num1, num2;
    
    printf("num1: ");
    validateIntegerInput(&num1);

    printf("num2: ");
    validateIntegerInput(&num2);

    if (num1 % num2 == 0) {
        printf("%d is a multiple of %d", num1, num2);
    } else if (num2 % num1 == 0) {
        printf("%d is a multiple of %d", num2, num1);
    } else {
        printf("The two numbers are not multiples of each other");
        return 0;
    }

    return 0;
}