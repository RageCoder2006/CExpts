// armstrong nos. from 100 to 500
#include <stdio.h>
#include <math.h>

int main() {
    int number = 100;
    while (number <= 500) {
        int dig1 = number % 10;
        int dig2 = (number % 100) / 10;
        int dig3 = number / 100;
        int cond = pow(dig1, 3) + pow(dig2, 3) + pow(dig3, 3);
        if (cond == number) {
            printf("%d is an armstrong number\n", number);
        }
        number++;
    }
}

/* using for loop
int main(){
  int number;
  for(number = 100; number <= 500; number++){
    int dig1 = number % 10;
    int dig2 = (number % 100)/10;
    int dig3 = number / 100;
    int cond = pow(dig1,3) + pow(dig2,3) + pow(dig3,3);
    if (cond == number){
      printf("%d is an armstrong number\n", number);
    }
    else {
    }
}

}*/
