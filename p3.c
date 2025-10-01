#include <stdio.h>
int main() {
    int num, i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = num; i >= 1; i--) {
        factorial = factorial * i;
    }

    printf("Factorial is: %d\n", factorial);

    return 0;
}
