/*10
60 75 90 55 75 99 82 90 75 50
3 75 90 88*/

# include <iostream>
# include <map>
using namespace std;

int main(){

    int N, Q;
    int arr1[N]= {0};
    int arr2[Q]= {0};
    map<int, int> m;     // 從 string 對應到 int
    cin>>N;
    for(int j=0; j<N; j++){
        cin>>arr1[j];
    } 
    cin>>Q;
    for(int j=0; j<Q; j++){
        cin>>arr2[j];
    }
    for (int i =0; i<Q; i++){
        int qury=arr2[i];
        for(int j=0; j<N; j++){
            if (arr1[j]==qury)
                m[qury]+=1;
        }
    }
    for (int i=0; i<Q; i++){
        int qury=arr2[i];
        cout<<m[qury];
        if (i==Q-1)
            cout<<endl; 
        else
            cout<<" ";
    }
    return 0;
}

#include <iostream>
using namespace std;
 
int main(){
    int score[101]={0};
    int N,Q,x;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        score[x]++;
    }
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>x;
        cout<<score[x];
        if(i<Q-1) cout<<" ";
    }
    return 0;
}