#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool hash[256] = {false};
    int len_1 = s1.length(),len_2 = s2.length();
 
    for(int i=0;i<len_2;++i)
    {
        s2[i] = towupper(s2[i]);
        hash[s2[i]]=true;
    }
    for(int i=0;i<len_1;++i)
    {
        s1[i] = towupper(s1[i]);
        if(hash[s1[i]]==false)
            cout<<s1[i];
        hash[s1[i]]=true;
    }
 
    return 0;
}
