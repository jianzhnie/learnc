#include<stdio.h>
#include <iostream>
#include<math.h>
#include<map>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        int count=0;
        for(i=2;i<=sqrt(n);i++){ 
            if (n%i==0){
                if(i==sqrt(n) && n/i==i){
                    count+=1;
                }
                else{
                    count+=2;
                }
            }
        }
        if (n==2) cout<<endl;
        else cout << count << endl;
    }
    return 0;
}


#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k,i;
    while(cin>>n){  k=0;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0){
        while(n%i==0)n=n/i;
        k++; }
    if(n!=1)k++;
    cout<<k<<endl;
    }
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k,i;
    while(cin>>n){  
    k=0;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0){
            while(n%i==0)
                n=n/i;
                k++; 
        }
        if(n!=1)k++;
    cout<<k<<endl;
    }
    return 0;
}