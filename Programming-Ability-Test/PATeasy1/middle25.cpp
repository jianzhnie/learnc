/*输入包含多组数据，每组数据包含三个正整数a、b、c（1≤a, b, c≤10^100）。*/

#include <iostream>
using namespace std;

int main()
{      
    double a,b,c;
    while (cin >>a>>b>>c)
    {
        if (a+b>c && a+c>b && b+c>a) {
            cout << "Yes"<< endl;}
        else {
            cout<<"No"<<endl;}
    }
    return 0;
}
