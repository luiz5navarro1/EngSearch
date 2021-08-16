/*
Author: Luiz Navarro
Program: ConcatRemove
*/
#include <iostream>

using namespace std;

int main() {
    /* input parameters */
    /* string to calculate lenght */
    char s[200] = "";
    int lenght = 0;

    /* ask questions */
    cout<<"Please enter a string to calculate its lenght (limit 199): ";
    cin.getline(s, 200);

    while (s[lenght] != '\0') {
        /* next character */
        lenght++;
    }

    /* show result */
    cout<<"String lenght: "<<lenght<<" character(s)";
    return 0;
}