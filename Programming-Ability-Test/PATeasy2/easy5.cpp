#include <iostream>
#include <set>
 
using namespace std;
 
class Student
{
public:
    int id, morality, ability, sum, level;
    Student(int id, int morality, int ability) {
        this->id = id;
        this->morality = morality;
        this->ability = ability;
        this->sum = morality + ability;
        level = 4;//默认为第4等级，可改
    }
    bool operator <(const Student& another)const {
        if(level != another.level) {
            return level>another.level;
        } else if(sum != another.sum) {
            return another.sum>sum;
        } else if(morality != another.morality) {
            return another.morality>morality;
        } else {
            return id>another.id;
        }
    }
};
 
int main()
{
    // 基本变量
    int N, L, H;
    cin >> N >> L >> H;
    set<Student> student;
    // 分类划级
    for(int i=0; i<N; i++) {
        int id, morality, ability;
        cin >> id >> morality >> ability;
        Student stu(id, morality, ability);
        if(stu.morality<L || stu.ability<L) {
            continue;
        } else if(stu.morality >= H && stu.ability >= H) {
            stu.level = 1;
        } else if(stu.morality >= H) {
            stu.level = 2;
        } else if(morality>=ability) {
            stu.level = 3;
        } else {
            stu.level = 4;
        }
        student.insert(stu);
    }
 
    // 输出结果
    set<Student>::reverse_iterator iter;
    cout << student.size() << endl;
    for(iter=student.rbegin(); iter != student.rend(); iter++) {
        cout << (*iter).id << " " << (*iter).morality << " " << (*iter).ability << endl;
    }
    return 0;
}