# include <iostream>
# include <stack>  //使用stack需要包含此头文件
# include <stdio.h>
using namespace std;


int main(){
    long n;
    int r=0;
    while(scanf("%ld %d", &n, &r)!=EOF){
        stack <int> stk;
        int sum=0;
        while (n) {
            sum += n%r;
            n /= r;
        }
        while (sum) {
            stk.push(sum%r);
            sum /= r;
        }
        while (!stk.empty()) {
            int res = stk.top();
            if (res<10) cout<<res;
            else if (res==10) cout<<'A';
            else if (res==11) cout<<'B';
            else if (res==12) cout<<'C';
            else if (res==13) cout<<'D';
            else if (res==14) cout<<'E';
            else if (res==15) cout<<'F';
            stk.pop();
        }
        cout<<endl;
    }
    return 0;
}
