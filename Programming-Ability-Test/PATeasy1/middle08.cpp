# include <iostream>
# include <stdio.h>
using namespace std;

int Fib(int n){
    if (n <=1)
        return 1;
    else if (n==2)
        return 2;
    else
        return Fib(n-1)+Fib(n-2);
}

int main(){
    int n;
    long int a[91] = {1,2};
    for(int i= 2;i<=90;i++){
        a[i] = a[i-1]+a[i-2];
    }
    while(scanf("%d",&n)!=EOF){
        long int res = a[n];
        cout<<res<<endl;
    }
    return 0;
}