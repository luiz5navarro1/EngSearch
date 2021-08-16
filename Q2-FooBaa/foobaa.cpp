/*
Author: Luiz Navarro
Program: FooBaa
*/
#include <stdio.h>

int main() {
    for (int n = 1; n < 101; n++) {
        if (n % 3 == 0) {
            if (n % 5 == 0) {
                printf("FooBaa");
            }
            else {
                printf("Foo");
            }
        } else if (n % 5 == 0) {
            printf("Baa");
        } else {
            printf("%d", n);
        }

        printf("\n");
    }

    return 0;
}