//1010.Password
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,m=0,f1=0,f2=0;
    cin>>n; // n 个测试样例
    vector<string> t; //vector用push_back函数 不用越界[i]赋值
    string t1,t2;
    for(int i=0; i<n; i++){
        cin>>t1>>t2;
        f2=0;
        for(int i=0;i<t2.size();i++){
            //cout<<t2[i];
            switch(t2[i]){
                case '0': t2[i]='%'; f2=1; break;
                case '1': t2[i]='@'; f2=1; break;
                case 'l': t2[i]='L'; f2=1; break;
                case 'O': t2[i]='o'; f2=1; break;
            }
        }
        if(f2==1){t.push_back(t1+" "+t2); f1=1; m++;}
 
    }
    if(f1==0){
        cout<<"There";
        n==1?cout<<" is ":cout<<" are ";
        cout<<n<<" account"; n==1?cout<<"":cout<<"s";
        cout<<" and no account is modified"<<endl;
    }else{
        cout<<m<<endl;
        for(int i=0;i<m;i++) cout<<t[i]<<endl;
    }
    return 0;
}