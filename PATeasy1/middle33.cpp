//对任何一个自然数n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把(3n+1)砍掉一半。这样一直反复砍下去，最后一定在某一步得到n=1。
# include <iostream>
using namespace std;


int IsEven(int n){
    bool flag = true;
    if (n%2==1) flag=false;
    return flag;
}

int main(){
    int n ;
    cin >>n;
    int count=0;
    while (n !=1){
        if (IsEven(n)) n/=2;
        else n = (3*n +1)/2;
        count ++;
    }
    cout <<count<<endl;
    return 0;
}