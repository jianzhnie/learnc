# include <iostream>
# include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < a.length(); i++)
        sum += (a[i] - '0');
    string s = to_string(sum);
    string ch2en[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    cout << ch2en[s[0] - '0'];
    for (int i = 1; i < s.length(); i++)
        cout << " " << ch2en[s[i] - '0'];
    return 0;
}
