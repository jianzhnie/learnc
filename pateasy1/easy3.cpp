/*令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有素数。
输入描述:
输入在一行中给出M和N，其间以空格分隔。

输出描述:
输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入例子:
5 27

输出例子:
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103 */

#include <iostream>
#include <math.h>
using namespace std;
 

int sushu(int n){
    int flag = 1;
    if (n ==1)
        flag=0;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i ==0)
            flag =0;
    }
    return flag;
}

int main(){
    int m,n;
    cin>>m>>n;
    int cnt = 0;
    for (int i=2; cnt<=n; i++){
        if (sushu(i)){
            cnt +=1;
            if (cnt >=m && cnt <=n){
                cout << i;
                if ((cnt-m)%10==9)
                    cout <<endl;
                else if (cnt !=n)
                    cout <<" ";
            }
        }
    }
    cout << endl;
    return 0;
}