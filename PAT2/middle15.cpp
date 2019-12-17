#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int fun(const string &s){
    int ret=0;
    int v,b;
    for(int i=0;i<s.size();i++){
        v=s[i]-'0';
        b=s.size()-i;
        ret+=v*(pow(2,b)-1);
    }
    return ret;
}
int main(){
    string s;
    while(cin>>s){
        cout<<fun(s)<<endl;
    }
    return 0;
}