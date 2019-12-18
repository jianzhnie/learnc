# include <cmath>
# include <iostream>
using namespace std;


int main(){
    unsigned n;
    int res;
    while(cin>>n){
        if (n==0) break;
        res = ceil(log(n)/log(3));
        cout<<res<<endl;
        
    }
    return 0;
}
