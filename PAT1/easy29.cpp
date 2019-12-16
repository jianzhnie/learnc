#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
    int hash[128]={0};
    char a[1001],b[1001];
    cin>>a>>b;
    int len1=strlen(a);
    int len2=strlen(b);
    for(int i=0;i<len1;i++)
        hash[a[i]]++;
    int num=0;
    for(int i=0;i<len2;i++){
        if(hash[b[i]]>0){
            hash[b[i]]--;
            num++;
        }
    }
    if(num==len2) 
        cout<<"Yes"<<" "<<len1-num<<'\n';
    else 
        cout<<"No"<<" "<<len2-num<<'\n';
 
    return 0;
}