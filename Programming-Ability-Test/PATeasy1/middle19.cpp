#include <stdio.h>
#include <iostream>
#include <stack>  
using namespace std;


int IsHuiWen(int n)
{
    int res=0;
    int flag =0;
    while (n){
        int s = n%10;
        n /=10;
        res = res*10 + s;
    }
    if (res==n){
        flag=1;
    }
    return flag;
}

int main(){
    long n;
    while(scanf("%ld %d", &n)!=EOF){
        for (int r=2; r<=16; r++){
            stack <int> stk;
            while (n) {
                stk.push(n%r);
                n /= r;
        }
            res = IsHuiWen(n);
        }


    }


    return 0;
}