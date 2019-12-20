#include <bits/stdc++.h>
using namespace std; 

typedef  long long ll;
int arr[10];
int main(void)  
{     
    string s;
    while(cin>>s)
    {
        fill(arr,arr+10,0);
        int Max=-1;
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'0']++;
            Max=max(Max,arr[s[i]-'0']);
        }
        for(int i=Max;i>0;i--)
        {
            for(int j=0;j<=9;j++)
            {
                if(arr[j]==i)
                {
                    cout<<'*';
                    arr[j]--;
                }
                else
                    cout<<' ';
            }
            cout<<endl;
        }
         
        cout<<"0123456789"<<endl;
    }    
    return 0;
}