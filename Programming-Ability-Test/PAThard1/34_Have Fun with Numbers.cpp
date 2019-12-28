# include <iostream>
# include <map>
using namespace std;


int main(){
    long long a, b, t1,t2;
    map<int, int>m1,m2;
    cin>>a;
    t1 = a;
    while(a>0){
        int r = a%10;
        a /=10;
        m1[r]+=1;
    }
    b = 2*t1;
    t2 = b;
    while(b>0){
        int r = b%10;
        b /=10;
        m2[r]+=1;
    }
    int flag=1;
    for(int i=1; i<10; i++){
        if (m1[i] != m2[i]){
            flag = 0;
        }
    }
    if (flag==1) {
        cout<<"Yes"<<endl;
        cout<<t2<<endl;
    }
    else {
        cout<<"No"<<endl; 
        cout<<t2<<endl;
    }
    return 0;
}