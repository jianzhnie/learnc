#include <iostream>
using namespace std;

char s[100010];
int main(){
    cin>>s;
    long long p=0,pa=0,pat=0;
    for(int i=0;s[i];i++){
        if(s[i]=='P') p++;         //i及左边共几个p
        else if(s[i]=='A') pa+=p;  //i及左边共几个pa
        else pat+=pa;              //i及左边共几个pat
    }
    cout<<pat%1000000007;
    return 0;
}