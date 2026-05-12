//with argument and without return//

#include <stdio.h>

void printstar (int a ) {

    for (int i=0; i<a; i++) {
        printf("%c", 'a');
    }

}
int main () {
    int a ;

    printstar (10);

    return 0;
}