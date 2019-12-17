#include <iostream>
# include<stdio.h>
using namespace std;
/*
输入有多组数据，每组数据包含一个正整数n (1≤n≤2147483647)和一个正整数r (2≤r≤16)。
其中n为十进制整数，r为目标进制。
输出描述:
对应每组输入，输出整数n转换成r进制之后，其中包含多少个“1”。
*/
int main(){
    long n;
    int r=0;
    int cnt;
    while(scanf("%ld %d", &n, &r)!=EOF){
        cnt =0;
        while (n) {
            if (n%r==1){
                cnt ++;
            }
            n /= r;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
