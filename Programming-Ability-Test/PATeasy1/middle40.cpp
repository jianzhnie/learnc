#include <iostream>
using namespace std;
 
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int * a = new int[n];
        m = m % n;
        for (int i = 0,j = m; i < n; i++,j++)
        {
            if (j > n - 1)
            {
                j = 0;
            }
            cin >> a[j];
        }
        for (int i = 0; i < n; i++)
        {
            if(i != n-1)
                cout << a[i] << " ";
            else
            {
                cout << a[i] << endl;
            }
        }
    }
}