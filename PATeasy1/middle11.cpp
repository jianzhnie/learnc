#include <stdio.h> 
#include <math.h>
#include <iostream>
using namespace std;

int IsPrime(int n);

int main()
{
    int x = 0, y = 0;
    while (cin >> x >> y)
    {
        int is_ok = 1;
        if (x == 0 && y == 0)
        break;
        int i = x, j = 0, k = 0;
        for (; i <= y; i++)
        {
            if (!IsPrime(i * i + i + 41))
            {
                is_ok = 0;
                break;
            }
        }
        if (is_ok)
            cout << "OK" << endl;
        else
            cout << "Sorry" << endl;
    }
}

int IsPrime(int n)
{
    int i, res=1;
    for(i=2;i<(int)sqrt(n)+1;i++){
        if(n%i==0)
            res=0;
            break;
    }
    return res;
}