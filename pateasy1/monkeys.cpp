#include <list>
#include <iostream>
using namespace std;
int main()
{
    list<int> monkeys;
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        monkeys.clear();  //清空list容器
        for (int i = 1; i <= n; ++i)  //将猴子的编号放入list
            monkeys.push_back(i);
        list<int>::iterator it = monkeys.begin();
        while (monkeys.size() > 1) { //只要还有不止一只猴子，就要找一只猴子让其出列
            for (int i = 1; i < m; ++i) { //报数
                ++it;
                if (it == monkeys.end())
                    it = monkeys.begin();
            }
            it = monkeys.erase(it); //删除元素后，迭代器失效，
                                    //要重新让迭代器指向被删元素的后面
            if (it == monkeys.end())
                it = monkeys.begin();
        }
        cout << monkeys.front() << endl; //front返回第一个元素的引用
    }
    return 0;
}
