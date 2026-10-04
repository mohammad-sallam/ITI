#include <stdio.h>
#include <math.h>
#include <ctype.h>

void validateIntegerInput(int * digit) {
    while(scanf(" %d", digit)==0 || *digit < 1 || *digit > 12) {
        printf("Please enter a number between 1-12\n");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
}

int main() {
    int num;
    
    printf("num: ");
    validateIntegerInput(&num);

    switch(num) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3: 
            printf("March");
            break;
        case 4: 
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    return 0;
}