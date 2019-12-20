//给定一个k位整数N = dk-1*10k-1 + ... + d1*101 + d0 (0<=di<=9, i=0,...,k-1, dk-1>0)，
//请编写程序统计每种不同的个位数字出现的次数。例如：给定N = 100311，则有2个0，3个1，和1个3。

#include<iostream>
#include<string>
#include<map>
using namespace std;

// 这个解法类似于python 字典
int main()
{
    string n;
    map<char, int> m;
    cin >> n;
    for (auto x :n)
    {
        if (m.find(x)==m.end())
        {
            m[x] = 1;
        }
        else
        {
            m[x]++;
        }
    }
    for (auto x : m)
        cout << x.first << ":" << x.second << endl;
    return 0;
}




