# include <iostream>
# include <stdio.h>
using namespace std;

int main(){
    int n;
    long int a[91] = {1,2};
    for(int i=2;i<=90;i++){
        a[i] = a[i-1]+a[i-2];
    }
    while(scanf("%d",&n)!=EOF){
        long int res = a[n-1];
        cout<<res<<endl;
    }
    return 0;
}