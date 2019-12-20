/*给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。
目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：
给定两个0，两个1，三个5，一个8，我们得到的最小的数就是10015558。*/

# include <iostream>
using namespace std;

int main(){
    int count[10];
    for (int i=0; i<=9; i++){
        cin>>count[i];
    }
    // 这里首先找出一个最小的非零值作为首位， 然后剩余的数就可以从小
    // 到大依次排列
    for(int i = 1; i < 10; i++){
        if(count[i]) {
            cout << i;
            count[i]--;
            break; //这里控制了首位不为0
        }
    }
    for(int i = 0; i < 10; i++)
        while(count[i]--)
            cout << i;
    return 0;
}