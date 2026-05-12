//with argument and with return//

#include <stdio.h>
int sum (int a, int b){
    return a + b;
}
int main () {

    int a, b, c;
    a = 60;
    b = 9;
    c = sum(a, b);
    printf("%d", c);
}