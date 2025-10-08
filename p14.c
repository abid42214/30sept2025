#include<stdio.h>
int main (){
int marks;
printf("enter your marks");
scanf("%d",&marks);
 if(marks>=80){
    printf("you got a +");
 }
 if(marks>=70&&marks<80){
    printf("you got a");
    }
 if(marks>=60&&marks<70){
    printf("you got a-");
    }
 if(marks>=50&&marks<60){
    printf("you got b");
    }
 if(marks>=40&&marks<50){
    printf("you got c");
    }
 if(marks>=33&&marks<40){
    printf("you got d");
    }

 else{
     printf("apni fail marsen");
 }
return 0;
}
