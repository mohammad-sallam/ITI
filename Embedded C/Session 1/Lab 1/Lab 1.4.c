#include <stdio.h>
#include <math.h>
#include <ctype.h>

void validateIntegerInput(int * digit) {
    while(scanf(" %d", digit)==0 || *digit < 0) {
        printf("Please enter a positive number.\n");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
}

int main() {
    int hours, minutes, seconds;
    
    printf("Seconds: ");
    validateIntegerInput(&seconds);

    if (seconds == 0) {
        hours = 0;
        minutes = 0;
        printf("%d Hours, %d Minutes, and %d Seconds", hours, minutes, seconds);
        return 0;
    }

    hours = seconds / (60*60);
    seconds %= 60*60;

    if (seconds == 0) {
        minutes = 0;
        printf("%d Hours, %d Minutes, and %d Seconds", hours, minutes, seconds);
        return 0;
    }

    minutes = seconds / 60;
    seconds %= seconds / 60;

    printf("%d Hours, %d Minutes, and %d Seconds", hours, minutes, seconds);

    return 0;
}