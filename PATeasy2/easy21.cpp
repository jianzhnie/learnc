#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11]={'1','0','x','9','8','7','6','5','4','3','2'};
    int N;
    cin>>N;
    string A;
    int flag=1;//whether the data is all passed
    for(int i=0;i<N;++i)
    {
        cin>>A;
        int sum=0;
        int is_wrong=0;
        for(int j=0;j<17;j++)
        {
            if(A[j]<'0'||A[j]>'9')
            {
                cout<<A<<endl;
                flag=0;
                is_wrong=1;
                break;
            }
            sum+=(A[j]-'0')*weight[j];
        }
        //judge the last char
        int z=sum%11;
        char right=M[z];
        if(A[17]!=right&&is_wrong==0){
            flag=0;
            cout<<A<<endl;
        }
    }
    if(flag)
    {
        cout<<"All passed"<<endl;
    }
    return 0;
}