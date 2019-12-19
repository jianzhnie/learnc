# include <iostream>
# include <math.h>
using namespace std;


int convertDecimalToKmod(int n, int k)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%k;
        n /= 10;
        decimalNumber += remainder*pow(10,i);
        ++i;
    }
    return decimalNumber;
}

// int main(){
//     int r,g,b;
//     cin>>r>>g>>b;
//     cout<<"#";
//     int r1 = convertDecimalToKmod(r,13);
//     int g1 = convertDecimalToKmod(g,13);
//     int b1 = convertDecimalToKmod(b,13);
//     if (r1<10) cout<<0<<r1; else cout<<r1;
//     if (g1<10) cout<<0<<g1; else cout<<g1;
//     if (b1<10) cout<<0<<b1; else cout<<b1;
//     return 0;
// }


#include <cstdio>
using namespace std;
int main() {
    char c[14] = {"0123456789ABC"};
    printf("#");
    for(int i = 0; i < 3; i++) {
        int num;
        scanf("%d", &num);
        printf("%c%c", c[num/13], c[num%13]);
    }
    return 0;
}