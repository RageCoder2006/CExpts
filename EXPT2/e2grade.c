// grade calculator
#include <stdio.h>
int main(){
    int perc;
    char rank;
    printf("Enter percentage scored by the student: ");
    scanf("%d",&perc);
    if (perc>=60 && perc<=100){
        printf("Student Secured First Class");
    }
    else if (perc>=50 && perc<60){
        printf("Student Secured Second Class");
    }
    else if (perc>=40 && perc<50){
        printf("Student Secured Pass Class");
    }
    else if (perc<40){
        printf("Student has FAILED.");
    }
    else{
        printf("INVALID INPUT");
    }
    
}