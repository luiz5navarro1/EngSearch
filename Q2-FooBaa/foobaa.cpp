/*
Author: Luiz Navarro
Program: FooBaa
*/
#include <stdio.h>

int main() {
    /* loop (n)umber from 1 until 100 */
    for (int n = 1; n <= 100; n++) {
        /* is n multiple of 3? */
        if (n % 3 == 0) {
            /* n is multiple of 3 */
            /* is n multiple of 5 too? */
            if (n % 5 == 0) {
                /* n is multiple of 3 and 5 */
                printf("FooBaa");
            }
            else {
                /* n is just multiple of 3 */
                printf("Foo");
            }
        }
        /* is n multiple of 5? */
        else if (n % 5 == 0) {
            /* n is multiple of 5 */
            printf("Baa");
        }
        /* n not multiple of 3 or 5 */
        else {
            printf("%d", n);
        }

        printf("\n");
    }

    return 0;
}