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

int calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;
    
    printf("x1: ");
    validateIntegerInput(&x1);

    printf("y1: ");
    validateIntegerInput(&y1);

    printf("x2: ");
    validateIntegerInput(&x2);

    printf("y2: ");
    validateIntegerInput(&y2);

    int distance = calculateDistance(x1, y1, x2, y2);
    printf("distance: %d", distance);

    return 0;
}

