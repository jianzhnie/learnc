/*3 20
18 15 10
75 72 45
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N表示月饼的种类数、以及不超过500（以万吨为单位）的正整数
D表示市场最大需求量。随后一行给出N个正数表示每种月饼的库存量（以万吨为单位）；最后一行给出N个正数表示每种月饼的总售价（以亿
元为单位）。数字间以空格分隔。*/

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std; 

// 使用结构体能够很好的解决这类问题
// 结构体排序，可以依据某个关键字段排序，相应关联的字段也会排序
struct PIE 
{
    double stock;
    double value;
    double price;
};
// cmp 函数返回值为bool，若第一个排在第二个的前面，则返回true
// 故 a.value > b.value 代表降序；a.value < b.value 代表升序（默认的）
bool cmp(PIE a, PIE b)
{
    return a.price > b.price;
}

int main()
{
    int N, D;
    cin >> N >> D;
    PIE pie[N];
    for(int i = 0; i < N; i++)
    {
        cin >> pie[i].stock;
    }
    for(int i = 0; i < N; i++)
    {
        cin >> pie[i].value;
    }
    for(int i = 0; i < N; i++)
    {
        pie[i].price = pie[i].value/pie[i].stock;
    }
    double sum = 0.0;
    // 用sort() 排序后如何处理？
    // 结构体貌似不能用pie.start() 和pie.end();
    // cmp 函数的使用方法
    sort(pie, pie+N, cmp);
    // 对sort() 的理解还是不够
    for(int i = 0; i < N; i++)
    {
        if(D >= pie[i].stock)
        {
            sum += pie[i].value;
            D -= pie[i].stock;
        }
        else
        {
            sum += D * pie[i].price;
            break;
        }
    }
    cout << fixed << setprecision(2) << sum<<endl;
    return 0;
}