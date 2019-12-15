//a,b=map(int,input().split())
//print(str(a//b)+" "+str(a%b))

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,ans;
    int n,d = 0;
    cin >> str >> n;
    for(int i = 0; i <= str.size()-1; i++){
        int current = d * 10 + (str[i]-'0');
        ans += (current / n+'0');
        d = current % n;
    }
    for(int i = (ans[0] == '0' && ans.size()!=1)?1:0; i < ans.size(); i++)
        cout << ans[i];
    cout << " " << d;
    return 0;
}