# include <iostream>
# include <map>
# include <string>
using namespace std;


int main(){
    map <char, int> m1, m2;
    string str1, str2;
    while (cin>>str1>>str2)
    {
        int len1 = str1.length();
        int len2 = str2.length();
        for (int i=0; i<len1; i++){
            m1[str1[i]]++;
        }
        for (int i=0; i<len2; i++){
            m2[str1[i]]++;
        }
        for (int i=0; i<m2.size; i++){
            while(m2[i]!=0);
                if m1[m2[i]]
        }

    }
    


    return 0;
}