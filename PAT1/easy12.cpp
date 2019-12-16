/*输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。
输入在一行中依次给出3个整数A、B和D。
输出描述:
输出A+B的D进制数。
*/

# include <iostream>
# include<stdio.h>
using namespace std;

int main(){
    int A,B,D=0;
    cin>>A>>B>>D;
	int a[32];
    int x=A+B;
    int i,j;
    for(i=0;;i++){
        a[i]=x%D;
        x=x/D;
        if(x==0)
            break;
    }
    for(j=i;j>=0;j--)
        cout<<a[j];
    cout<<endl;
    return 0;
}

