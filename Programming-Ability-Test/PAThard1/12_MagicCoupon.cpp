#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(long long a,long long b){
    return a>b;
}
long long a[100010],b[100010],sum=0;
int main(){
    int x,y;
    cin>>x;
    for(int i=0;i<x;i++) cin>>a[i];
    cin>>y;
    for(int i=0;i<y;i++) cin>>b[i];
    sort(a,a+x,cmp);
    sort(b,b+y,cmp);
    int num=0,j=0,k=0;
    while(a[j]>0&&b[k]>0&&num<=x&&num<=y){
        sum+=a[j]*b[k];
        num++;
        j++;k++;
    }
    j=x-1;k=y-1;
    while(a[j]<0&&b[k]<0&&num<=x&&num<=y){
        sum+=a[j]*b[k];
        num++;
        j--;k--;
    }
    cout<<sum;
    return 0;
}
