/*输入包含多组数据，每组数据包含一个正整数n（2≤n≤20）。
输出描述:
对应每一组数据，以“xx.xx%”的格式输出发生无人获奖的概率。*/

#include <stdio.h>
#include<iostream>
using namespace std;

/*
当n个编号元素放在n个编号位置，元素编号与位置编号各不对应的方法数用D(n)表示，
那么D(n-1)就表示n-1个编号元素放在n-1个编号位置，各不对应的方法数，其它类推.
第一步，把第n个元素放在一个位置，比如位置k，一共有n-1种方法；
第二步，放编号为k的元素，这时有两种情况：⑴把它放到位置n，那么，对于剩下的n-1个元素，
由于第k个元素放到了位置n，剩下n-2个元素就有D(n-2)种方法；⑵第k个元素不把它放到位置n，
这时，对于这n-1个元素，有D(n-1)种方法；

综上得到
D(n) = (n-1) [D(n-2) + D(n-1)]
特殊地，D(1) = 0, D(2) = 1.
*/


int main(){
    int n;
    double result[21]={0,0,1};
    double total[21]={1,1,2};
    double percent;
    for (int i=3; i<21; i++){
        result[i] = (i-1)*(result[i-1]+ result[i-2]);
        total[i] = i*total[i-1];
    }
    while(cin>>n){
        percent = result[n]/total[n];
        //printf("%.2f%c\n", percent * 100, '%');
        printf("%5.2f%%\n", 100 * percent);
    }
    return 0;
}