#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int hash[10000]={0};           //数组开大一点，不然会数组越界段错误（如n为95时可以达到485）
    int N, n;
    int a[101];
    int num=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
        n=a[i];
        if(hash[n]==1)            //如在前面过程中已经出现覆盖过一次，直接跳过这个数（不可能合格）
            continue;
        while(n>1){
            if(n%2==0)
                n/=2;
            else n=(3*n+1)/2;
            hash[n]=1;
        }
    }
    sort(a,a+N);                  //默认从小到大排序，之后的循环从大到小输出
    for(int i=N-1;i>=0;i--){
        if(hash[a[i]]==0){
            num++;
            if(num>1) cout<<" ";  //非第一个合格的数时，先输出空格再输出数字
            cout<<a[i];
        }
    }
    return 0;
}