# include <iostream>
# include <map>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;
    int image[N][M];
    map<int, int> arr;
    int half = M * N / 2;
    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int pixel;
            cin>>pixel;
            arr[pixel]++;
            if(arr[pixel] > half) {
                cout<<pixel<<endl;
                return 0;
            }
        }
    }
    return 0;
}
