#include <cstring>
#include <stdio.h> 
#include <iostream>
using namespace std;

char x[100010],y[100010];
int main(){
    int hash[128]={0};  //ASCII码128位
    cin>>x;           //用cin或者scanf无法识别回车换行符，即无法通过没有坏键的情况，要用gets
    cin>>y;
    int len1=strlen(x);
    int len2=strlen(y);
    for(int i=0;i<len1;i++){
        if(x[i]>='A'&x[i]<='Z'){
            hash[x[i]]=1;
            hash[x[i]-'A'+'a']=1;      //把该字母大小写一并禁掉
        }
        else if(x[i]=='+'){
            for(int j='A';j<='Z';j++)   //禁掉所有大写字母
                hash[j]=1;
        }
        else hash[x[i]]=1;
    }
    for(int i=0;i<len2;i++){
        if(hash[y[i]]==0)
            cout<<y[i];
    }
    cout<<'\n';          //就算没有一个字符能输出，也能通过换行输出空行
 
    return 0;
}