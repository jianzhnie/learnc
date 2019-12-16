#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int dot=s.find('.');//小数点位置；
        int eIndex=s.find('E');//E位置；
        char integer=s[dot-1];//整数部分
        string decimal=s.substr(dot+1,eIndex-dot-1);//小数部分;
        string exp=s.substr(eIndex+2);//指数部分；
        int expInt=stoi(exp);
        char sig1=s[0];//最前面的符号
        char sig2=s[eIndex+1];//指数的符号
        string temp=integer+decimal;
        if(sig1=='-')   cout<<'-';
        if(sig2=='+')
        {
            if(decimal.size()<=expInt)
                cout<<temp<<string(expInt-decimal.size(),'0');
            else
                cout<<temp.substr(0,expInt+1)<<'.'<<temp.substr(expInt+1);
        }
        else
        {
            cout<<"0."<<string(expInt-1,'0')<<temp;
        }
    }
}