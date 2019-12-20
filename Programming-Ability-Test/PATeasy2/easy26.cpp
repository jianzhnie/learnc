#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    cin>>n>>c;
    for (int i =0;i<n; i++){
        cout<<c;
    }
    cout<<endl;
    for (int i=1;i<int(n/2.0+0.5)-1; i++){
        cout<<c;
        for (int j=1;j<n-1; j++){
            cout<<" ";
        }
        cout<<c<<endl;
    }
    for (int i =0;i<n; i++){
        cout<<c;
    }
    cout<<endl;
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    int col=(n+1)/2; 
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0||i==col-1||j==n-1)  //唯一一个思考点
                printf("%c",ch);
            else 
                printf(" "); 
        }
    printf("\n");
    }
    return 0;
} 