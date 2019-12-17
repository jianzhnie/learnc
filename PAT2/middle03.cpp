#include<stdio.h>
#include <iostream>
using namespace std;


int main()
{
    long int a[95]={1,2};
    int n,i;
    for(i=2;i<91;i++)
        a[i]=a[i-1]+a[i-2];
    while(scanf("%d",&n)!=EOF)
    {
        cout<<a[n-1]<<endl;
    }
    return 0;
}