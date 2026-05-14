#include <stdio.h>

int factorial(number) {

    if (number == 1 || number == 0){
    return 1;
    }
    else {
    return (number * factorial(number - 1));
    }
}

int main () {
    int num;

    printf("enter the number you want the factorial of");
    scanf("%d", &num);

    printf("the factorial of the number %d is %d", num, factorial);

    return 0;

}