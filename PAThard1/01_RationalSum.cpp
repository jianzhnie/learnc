#include<iostream>
#include<vector>
using namespace std;
  
 //辗转相除法求最大公约数
 int gcd(int x,int y)
 {
    int t;
    while(y)
    {
        t=x%y;
        x=y;
        y=t;
    }
    return  x;
 }
  
int main()
{
    int n;
    cin >> n;
    vector<long long> numerator(n);    //存储分子部分
    vector<long long> denominator(n);    //存储分母部分
    long long a, b;
    char c;
    long long product = 1;    //各个数分母相乘的积
    for (int i=0; i<n; i++)
    {
        cin >> a >> c >> b;
        numerator[i] = a;
        denominator[i] = b;
        product *= b;
        }
    long long sum = 0;
    for (int i=0; i<n; i++)    //计算通分后分子相加的和
    {
        long long tmp = product/denominator[i] * numerator[i];
        sum += tmp;
    }
    if (sum==0)    //分子和为0，说明分数正负抵消，输出0
    {
        cout << 0;
        return 0;
    } 
    long long num = sum / product;    //计算和是否为假分数
    a = sum % product;
    if (a == 0)    //得到的和为整数
    {
        if (num != 0)
            cout << num;
        return 0;
    }
    long long g = gcd(product, a);    //约分
    a = a/g;
    b = product/g;
    if (b < 0)    //处理负数的情况
    {
        a *= -1;
        b *= -1;
    }
    if (num != 0)
        cout << num << " ";
    cout << a << "/" << b;
}
