// solns of quad eqn
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, xone, xtwo, D;
    printf("Enter the values of a, b, and c: ");
    scanf("%f%f%f",&a,&b,&c);
    D = pow(b,2)-4*a*c;
    if (D>0){
        xone = (-b + D)/(2*a);
        xtwo = (-b - D)/(2*a);
        printf("Roots are: %f, %f",xone,xtwo);
    }
    else if (D==0){
        xone = (-b + D)/(2*a);
        xtwo = (-b - D)/(2*a);
        printf("Roots are: %f, %f",xone,xtwo);
    }
    else if (D<0){
        printf("Roots are Imaginary.");
    }
    return 0;
}