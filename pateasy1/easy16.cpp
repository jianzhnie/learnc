/*要获得一个C语言程序的运行时间，常用的方法是调用头文件time.h，其中提供了clock()函数，可以捕捉从程序开始运行到clock()被调用时所
耗费的时间。这个时间单位是clock tick，即“时钟打点”。同时还有一个常数CLK_TCK，给出了机器时钟每秒所走的时钟打点数。于是为了获
得一个函数f的运行时间，我们只要在调用f之前先调用clock()，获得一个时钟打点数C1；在f执行完成后再调用clock()，获得另一个时钟打点
数C2；两次获得的时钟打点数之差(C2-C1)就是f运行所消耗的时钟打点数，再除以常数CLK_TCK，就得到了以秒为单位的运行时间。

这里不妨简单假设常数CLK_TCK为100。现给定被测函数前后两次获得的时钟打点数，请你给出被测函数运行的时间。*/

# include <iostream>
#include <stdio.h>
# include <time.h>
using namespace std;

int main(){

    int c1,c2;
    cin>>c1>>c2;
    int h,m,s=0;
    int time =(int)(1.0 * (c2 - c1) / 100 + 0.5);
    h = time/3600;
    time %=3600;
    m = time/60;
    s = time%60;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}