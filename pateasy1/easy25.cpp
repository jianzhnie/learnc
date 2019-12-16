#include <algorithm>
#include <iostream>
using namespace std;
int n,a[110],s[110];

void mergesort(int (&a)[110],int s[],int n){   //注意引用数组的写法
    int step=1,flag=1;
    while(flag){                               //flag表示数组的中间步骤是否与中间数组相同
        flag=0;
        for(int i=0;i<n;i++){
            if(a[i]!=s[i])
                flag=1;
        }
        step*=2;                              //不断的归并排序，直到与中间数组相同，再排序一次并退出
        for(int i=0;i<n;i+=step)
            sort(a+i,a+min(i+step,n));        //不像插入排序一样只用一次处理。是因为判断归并的有序 区间大小比较复杂
    }
}
int main(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>s[i];
    for (i = 0; i < n - 1 && s[i] <= s[i + 1]; i++);  //找出中间数组的有序部分
    for (j = i + 1; a[j] == s[j] && j < n; j++);      //判断排序类型
    if(j==n){
        cout<<"Insertion Sort"<<'\n'; 
        sort(a,a+i+2);                      //直接用sort函数代替插入排序（注意下标）       
    }
    else{
        cout<<"Merge Sort"<<'\n';
        mergesort(a,s,n);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1) cout<<" ";
    }
    return 0;
}
 