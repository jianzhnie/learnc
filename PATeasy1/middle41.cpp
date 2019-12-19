#include <iostream>
#include <string>
using namespace std;

int main(){
    string in,out;
    cin>>out;
    while (cin>>in){
        out = in + " " + out;
        }
    cout<<out<<endl;
    system("pause");
    return 0;
}