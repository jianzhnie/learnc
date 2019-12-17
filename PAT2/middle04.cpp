#include<stdio.h>
#include <iostream>
using namespace std;


int main()
{
    // 数组元素的值可能很大，所以需要定义成 long long,避免越界
    long long a[80]={1,1};
    int m, n=0;
    //首先计算好数组 A;
    for(int i=2;i<80;i++){
        a[i]=a[i-1]+a[i-2];
    }
    while (cin>>m>>n){
        long long sum=0; // SUM 需要在循环里面定义
        for(int i=m; i<=n; i++){
            sum+=a[i-1];
        }
    cout<<sum<<endl;
    }
    return 0;
}