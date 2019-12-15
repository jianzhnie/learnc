/*
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。
 
现给定A、DA、B、DB，请编写程序计算PA + PB。

输入描述:
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。

输出描述:
在一行中输出PA + PB的值。

输入例子:
3862767 6 13530293 3
*/

# include <iostream>
#include <string>

using namespace std;

/*将数字转化为字符串实现就相对简单
*/

int main()
{
    string a,b;
    long long n,m,sum = 0,_sum = 0;
    cin >> a >> n >> b >> m;
    for(unsigned int i = 0; i < a.size(); i++) 
        if((a[i]-'0') == n)
            sum = sum*10+(a[i]-'0');
    for(unsigned int i = 0; i < b.size(); i++) 
        if((b[i]-'0') == m) 
            _sum = _sum*10+(b[i]-'0');
    cout << sum+_sum << endl;
    return 0;
}


