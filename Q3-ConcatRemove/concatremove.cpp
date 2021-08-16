/*
Author: Luiz Navarro
Program: ConcatRemove
*/

#include <stdio.h>
#include <cstring>
#include "concatremove.h"

void ConcatRemove::Execute(char s[], char d[], int m) {
    /* first we compare the (s)tart and (d)esired string, from the beginning of 
    each one, to see until where they're equal; this will show the position to 
    start removing/adding characters in the start string */
    /* position indicator */
    int p = 0;
    int x;

    /* search for the first difference between s and d */
    while (s[p] != '\0' && d[p] != '\0') {
        if (s[p] == d[p]) {
            /* next character */
            p++;
            continue;
        }

        /* difference found */
        break;
    }

    /* save position */
    x = p;

    /* remove different character from s */
    while (s[p] != '\0') {
        s[p] = '\0';
        /* next character */
        p++;
        /* decrease moves */
        m--;
    }

    /* restore position */
    p = x;

    /* add characters to make s = d */
    while (d[p] != '\0') {
        s[p] = d[p];
        /* next character */
        p++;
        /* decrease moves */
        m--;
    }

    if (m < 0) {
        strcpy(response, "no");
    }
    else {
        strcpy(response, "yes");
    }
}

int main() {
    /* input parameters */
    /* start string */
    char s[101] = ""; /* start it clean - 100 characters + \0 */
    /* desired string */
    char d[101] = ""; /* start it clean - 100 characters + \0 */
    /* number of moves */
    int m = 0;
    /* reference class */
    ConcatRemove cr;

    /* ask questions */
    printf("Please enter the start string: ");
    scanf("%s", s);
    printf("Please enter the desired string: ");
    scanf("%s", d);
    printf("How many moves? ");
    scanf("%d", &m);
    /* show result */
    cr.Execute(s, d, m);
    printf("%s", cr.response);
    return 0;
}