#include<stdio.h>
#include <iostream>
using namespace std;


int main()
{
    // 数组元素的值可能很大，所以需要定义成 long long,避免越界
    long long a[100001]={1,1};
    //首先计算好数组 A;
    for(int i=2;i<100001;i++){
        a[i]=(a[i-1]+a[i-2]);
        if (a[i]/1000000 >0){
            a[i]%=1000000;
        }
    }
    int n;
    int res;
    while (cin>>n){
        res = a[n];
        if (n<29)
            printf("%d\n", res);
        else
            printf("%06d\n",res);
    }
    return 0;
}