#include <iostream>
#include <stack>
using namespace std;

void  slove(int x);
int main()
{
    int a, b, ans;
    cin>>a>>b;
    ans=a+b;
    slove(ans);
    return 0;
}
//这道题用堆栈来解决是非常合适的，
//首先，格式化输出每三位写一个逗号，是从个位开始计数的，
//输出则是正常顺序，堆栈后入先出的设计恰好满足这一特点
void slove(int x){
    if(x==0) {cout<<"0"<<endl;return ;}
    if(x<0){cout<<"-"; x=-x;}
    stack<int>s;
    while(x){
        int t=x%10;
        s.push(t);
        x/=10;
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
        int len=s.size();
        if(len%3==0&&len) cout<<",";
    }
    cout<<endl;
}