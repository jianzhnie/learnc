# include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b !=0){
        int t = a %b;
        a = b;
        b = t;
    }
    return a;
}
