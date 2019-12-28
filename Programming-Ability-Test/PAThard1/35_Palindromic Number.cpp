#include <iostream>
using namespace std;

long long Palindromic(long long n){
    long long  num=0, rev=0;
    int digit;
    num = n;
    while (num != 0){
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    return rev;
}

int main() {
	long long n, rev;
    int k;
	cin>>n>>k;
    int num = 0;
    int flag = 0;
    while (k >0){
        // cout<<k<<endl;
        // cout<<n<<endl;
        rev = Palindromic(n);
        //cout<<rev<<endl;
        if (rev==n){
            flag = 1;
            break;
        }
        n +=rev;
        num +=1;
        k -=1;
    }
    cout<<n<<endl;
    cout<<num<<endl;
	return 0;
}