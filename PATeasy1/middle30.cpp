# include <iostream>
# include <stdio.h>
using namespace std;


int main() {
    int c;
    while ((c = getchar()) != EOF){
        if ('A' <= c) {
        c = 'E' < c ? (c - 5) : (c + 21);
        }
        putchar(c);
    }
}