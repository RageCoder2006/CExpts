// menu-based calculator
#include <stdio.h>
int main(){
    int choice;
    float a,b,sum,diff,prod,quo,rem;
    printf("===========================Calulator===========================\n");
    printf("Enter the Choice of operation you want to perform:\n");
    printf("[1] Add\n[2] Subtract \n[3] Multiply\n[4] Divide\n[5] Modulo\n>>>");
    scanf("%d",&choice);

    switch (choice){
    case 1:
        printf("===========Addition===========\n");
        printf("Enter the First number: ");
        scanf("%f",&a);
        printf("Enter the Second number: ");
        scanf("%f",&b);
        sum = a+b;
        printf("The sum of %f and %f is: %f", a,b,sum);
        break;
    case 2:
        printf("==========Subtraction==========\n");
        printf("Enter the First number: ");
        scanf("%f",&a);
        printf("Enter the Second number: ");
        scanf("%f",&b);
        diff = a-b;
        printf("The difference between %f and %f is: %f",a,b,diff);
        break;
    case 3:
        printf("=========Multiplication=========\n");
        printf("Enter the First number: ");
        scanf("%f",&a);
        printf("Enter the Second number: ");
        scanf("%f",&b);
        prod = a*b;
        printf("The product of %f and %f is: %f",a,b,prod);
        break;
    case 4:
        printf("===========Division============\n");
        printf("Enter the First number: ");
        scanf("%f",&a);
        printf("Enter the Second number: ");
        scanf("%f",&b);
        quo = a/b;
        printf("The quotient of %f divided by %f is: %f",a,b,quo);
        break;
    case 5:
        printf("=============Modulo=============\n");
        printf("Enter the First number: ");
        scanf("%f",&a);
        printf("Enter the Second number: ");
        scanf("%f",&b);
        rem = (int)a%(int)b;
        printf("The remainder of %f divided by %f is: %f",a,b,rem);
        break;
    default:
        printf("Please Enter a Valid Input, Dummy!");
        break;
    }
}
