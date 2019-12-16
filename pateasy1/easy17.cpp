/*
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
 *****
  ***
   *
  ***
 *****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递
增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
*/

# include <iostream>
# include <string>
# include <math.h>
using namespace std;

int main(){
    int n,d;
    char s;
    cin>>n>>s;
    d = (int)sqrt((n+1)/2); // 根据等差数列求出需要打印的行数及每一行打印的字符个数
    for (int i=0; i<d; i++){
        int count=2*d-1-2*i;
        for(int j=0;j<i;j++) // 用来打印空白字符
            cout<<" ";
        for(int j=0; j<count; j++) //用来打印空字符串
            cout<<s;
        cout<<endl;
    }
    for (int i=2; i<=d; i++){
        int count=2*i-1;
        for(int j=0;j<d-i;j++) // 用来打印空白字符
            cout<<" ";
        for(int j=0; j<count; j++)//用来打印空字符串
            cout<<s;
        cout<<endl;
    }
    int r = n+1 - 2*d*d; // 需要用到的字符串个数 2×d*d
    cout <<r<<endl;
    return 0;
}