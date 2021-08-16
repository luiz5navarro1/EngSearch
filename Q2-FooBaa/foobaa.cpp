/*
Author: Luiz Navarro
Program: FooBaa
*/
#include <stdio.h>

int main() {
    /* loop (n)umber from 1 until 100 */
    for (int n = 1; n <= 100; n++) {
        /* n multiple of 3? n multiple of 3 and 5? n multiple of 5? */
        (n % 3 == 0) ? ((n % 5 == 0) ? printf("FooBaa\n") : printf("Foo\n")) : (n % 5 == 0) ? printf("Baa\n") : printf("%d\n", n);
    }

    return 0;
}