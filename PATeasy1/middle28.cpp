# include <iostream>
# include <map>
# include <string>
using namespace std;


int main(){
    string str1, str2;
    while (cin>>str1>>str2)
    {
        map <char, int> m1, m2;
        int len1 = str1.length();
        int len2 = str2.length();
        for (int i=0; i<len1; i++){
            m1[str1[i]]++;
        }
        for (int i=0; i<len2; i++){
            m2[str2[i]]++;
        }
        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (m2[i] > m1[i])
            {
                cout << "No" << endl;
                break;
            }
            if (i == 'Z')
            {
                cout << "Yes" << endl;
            }
        }
    } 
    return 0;
}