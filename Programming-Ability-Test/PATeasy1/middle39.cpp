#include <iostream>
#include<math.h>
#include <vector>
using namespace std;

int IsPrime(int n)
{
  bool isPrime = true;
  for(int i=2; i<=sqrt(n); i++)
  {
    if(n % i == 0){
        isPrime = false;
        break;
    }
  }
  return isPrime;
}

int main(){
    int N;
    cin>>N;
    vector<int> vec;    // 宣告一個裝 int 的 vector
                        // 現在 vec 是空的
    for (int i=2; i<N; i++){
        if (IsPrime(i)){
            vec.push_back(i);
        }
    }
    int length=vec.size(); 
    int count=0;
    for(int i=0; i<length; i++){
        if (vec[i+1] -vec[i]==2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}