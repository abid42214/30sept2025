#include <stdio.h>
int main() {
int marks;
printf("Enter marks: ");
scanf("%d",&marks);
if (marks >= 80)
printf("Grade: A+\n");
else if (marks >= 70)
printf("Grade: A\n");
else if (marks >= 60)
printf("Grade: A-\n");
else if (marks >= 50)
printf("Grade: C\n");
else
printf("Grade: F\n");
return 0;
}

