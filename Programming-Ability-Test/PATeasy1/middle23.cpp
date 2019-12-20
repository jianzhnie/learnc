#include<iostream>
using namespace std;

int main(){
    int n,m;
    long long result1[21]={0,0,1};
    long long result2[21]={1,1,2};
    for (int i=3; i<21; i++){
        result1[i]=(i-1)*(result1[i-1]+ result1[i-2]);
        result2[i]=i*result2[i-1];
    }
    while(cin>>n>>m){
        long res = result1[m] * (result2[n]/(result2[m]* result2[n-m]));
        cout<<res<<endl;
    }
    return 0;
}