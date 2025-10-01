#include <stdio.h>
int main() {
int a, b;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);
if (a > b)
printf("a is largest: %d\n", a);
else
printf(" b is largest: %d\n", b);
return 0;
}
