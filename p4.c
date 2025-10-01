#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    int i;
    for(i = num; i != 0; i = i / 10) {
        count = count + 1;
    }

    printf("Total digits = %d\n", count);

    return 0;
}
