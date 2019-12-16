#include <iostream>
#include <map>
using namespace std;

// 创建一个类似python字典的 map 映射 m
// 如果需要找的字符的 keys 都在 m.keys()中，并且数量也能满足需求
// 则条件符合

int main(){
    string s1, s2;
    cin>>s1>>s2;
    map<char, int> m;
    int len1=s1.length();
    int len2=s2.length();
    int num =0;
    for(int i=0;i<len1;i++){
        m[s1[i]]++;
    }
    for(int i=0;i<len2;i++){
        if(m[s2[i]]>0){ //判断s2中的珠子是否在1中
            m[s2[i]]--; // 数量减一，用来判断数量是否一致
            num++;
        }
    }
    if (num==len2)
        cout<<"Yes"<<" "<<len1-num<<'\n';
    else 
        cout<<"No"<<" "<<len2-num<<'\n';
    return 0;
}