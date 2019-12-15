#include <iostream>
#include <algorithm>
using namespace std;

// 用到两个知识点： （1）C 语言的结构体
//                (2) vector
struct Person
{
    string name;
    string birthday;
};

bool compare(const Person& s1, const Person& s2)
{
    if (s1.birthday < s2.birthday)
        return true;
    else
        return false;
}

int main()
{
    int N;
    vector<Person> man;
    Person temp;
    string compare1 = "2014/09/06";
    string compare2 = "1814/09/06";
    cin >> N;
    for ( int i = 0; i < N; ++i)
    {
        cin >> temp.name >> temp.birthday;
        if (temp.birthday < compare1 && temp.birthday >= compare2)
            man.push_back(temp);
    }
    sort(man.begin(), man.end(), compare);
    cout <<man.size()<<" " <<man.front().name<<" "<<man.back().name;
    return 0;
}