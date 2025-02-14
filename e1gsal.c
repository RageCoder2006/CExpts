// Gross Salary of an Employee
#include <stdio.h>
int main(){
    int basic_sal, hra, da, ta, gross_sal;
    printf("Enter Basic Salary: ");
    scanf("%d",&basic_sal);
    ta = 1600;
    da = 0.1*basic_sal;
    hra = 0.3*basic_sal;
    gross_sal = basic_sal+da+hra+ta;
    printf("Gross Salary is: %d",gross_sal);
    return 0;

}