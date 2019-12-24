#include <iostream>
using namespace std;

struct Student{
    string name;
    char gender;
    string ID;
    int grade;
};

int main()
{
    int N;
    ios::sync_with_stdio(false);
    Student stu_f{"",'\0',"",-1};
    Student stu_m{"",'\0',"",101};
    Student stu;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >>stu.name >> stu.gender >> stu.ID >> stu.grade;
        if(stu.gender == 'F'){
            if(stu.grade > stu_f.grade) stu_f = stu;
        }
        else{
            if(stu.grade < stu_m.grade) stu_m = stu;
        }
    }
    //output
    bool NA = false;
    if(stu_f.gender=='F') cout << stu_f.name << " " <<stu_f.ID << "\n";
    else{
        cout << "Absent" << "\n";
        NA = true;
    }
    if(stu_m.gender=='M') cout << stu_m.name << " " << stu_m.ID << "\n";
    else{
        cout << "Absent" << "\n";
        NA = true;
    }
    if(NA) cout << "NA";
    else cout << stu_f.grade - stu_m.grade;
    return 0;
}