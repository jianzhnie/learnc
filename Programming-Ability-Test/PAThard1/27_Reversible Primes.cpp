#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
bool checkPrime(int n);
int toReverse(int n, int radix);


int main(){
    int n, d;
    while(scanf("%d %d", &n, &d)){
        if(n<0) {
            break;
        }
        int num = n;
        int reverse_num = toReverse(n,d);
        //cout<<num<<" "<<reverse_num<<" ";
        if(checkPrime(num) && checkPrime(reverse_num))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

int toReverse(int n, int radix){
    vector<int> temp;
    while(n>0){
        temp.push_back(n%radix);
        n = n/radix;
    }
 
    int result = 0;
    int len = temp.size();
    for(int i=0;i<len;i++){
        result += pow(radix,len-i-1) * temp[i];
    }
    return result;
}

// Check prime number
bool checkPrime(int n)
{
    bool isPrime = true;
    int i;
    if( n <= 1)
        isPrime = false;
    for(i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}