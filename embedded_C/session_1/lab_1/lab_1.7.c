#include <stdio.h>
#include <math.h>
#include <ctype.h>

void validateIntegerInput(int * digit) {
    while(scanf(" %d", digit)==0 || *digit > 100 || *digit == 0) {
        printf("Please enter a non-zero integer less than 100.\n");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
}

int main() {
    int num;
    
    printf("num: ");
    validateIntegerInput(&num);

    for (int i = 1; i <= 100; i++) {
        if (i % num == 0) {
            printf("%d divides %d\n", num, i);
        }
    }

    return 0;
}