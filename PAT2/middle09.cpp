# include <iostream>
# include <stdio.h>
using namespace std;

int main(){
    long long a[101] = {1,2};
    for(int i=2;i<100;i++){
        a[i] = a[i-1]+a[i-2];
    }
    int N;
    cin>>N;
    int m1, m2;
    for (int i =0; i<N; i++){
        cin>>m1>>m2;
        long long res = a[m2-m1-1];
        cout<<res<<endl;
    }
    return 0;
}