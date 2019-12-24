//1018.Sign In and Sign Out
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct student
{
    string id,start,final;
};
vector<student> s;
bool cmp1(student a,student b){
    return a.start<b.start;
} //时间不用转化为int型，用字符串的字典序比较即可
bool cmp2(student a,student b){
    return a.final>b.final;
}
int main()
{
    int m; cin>>m;
    s.resize(m);
    for(int i=0;i<m;i++) 
        cin>>s[i].id>>s[i].start>>s[i].final;
    sort(s.begin(),s.end(),cmp1);
    cout<<s[0].id<<" ";
    sort(s.begin(),s.end(),cmp2);
    cout<<s[0].id;
    return 0;
}