#include <iostream>
using namespace std;


int main()
{      
    int num, rest;
    while (cin >> num)
    {
        if (num == 0)
            continue;
        rest = 1;
        for (int i = 0; i < num-1; i++)
            rest = 2 * (rest + 1);     
        cout << rest << endl;
    }
    return 0;
}
