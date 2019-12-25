# include  <iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int elevator[N];
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        cin>>elevator[i];
    }
    int cur = 0;
    for (int i = 0; i < N; i++)
    { 
        int next = elevator[i];
        if (cur< next) res += 6*(next-cur);
        else res += 4*(cur-next);
        cur = next;
    }
    res += 5*N;
    cout<<res<<endl;
    return 0;
}