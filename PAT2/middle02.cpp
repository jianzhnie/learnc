/*NowCoder最近在研究一个数列：
* F(0) = 7
* F(1) = 11
* F(n) = F(n-1) + F(n-2) (n≥2)
他称之为NowCoder数列。请你帮忙确认一下数列中第n个数是否是3的倍数。*/

#include <iostream>
#include <stdio.h>
using namespace std;

int NowCoder(int n){
    if (n <=0)
        return 7;
    else if (n==1)
        return 11;
    else
        return NowCoder(n-1)+NowCoder(n-2);
}

int main()
{
    int n;int a[8];
    a[0]=7;
    a[1]=11;
    while(scanf("%d",&n)!=EOF){
        for(int i=2;i<=8;i++){
            a[i]=(a[i-1]+a[i-2])%3;
            n=n%8;
        }
        if (a[n]==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}