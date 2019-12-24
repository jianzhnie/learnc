#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
struct Student{
    int grade;
    char gender;
    string name, id;
    Student() {}
    void read(){
        cin >> name >> gender >> id >> grade;
    }
};
 
bool compare(Student s1, Student s2){
    return s1.grade < s2.grade ;
}
 
int main(){
    int N;
    int highest, lowest;
    vector<Student> mv;
    vector<Student> fv;
    cin >> N;
    while(N--){
        Student s;
        s.read();
        if(s.gender == 'M') mv.push_back(s);
        else if(s.gender == 'F') fv.push_back(s);
    }
    int fv_size = fv.size();
    int mv_size = mv.size();
    if(fv_size){
        sort(fv.begin(), fv.end(), compare);
        auto iter = fv.crbegin();
        highest = iter -> grade;
        cout << iter->name << " " << iter->id << endl;
    }
    else cout << "Absent" << endl;
    if(mv_size){
        sort(mv.begin(), mv.end(), compare);
        auto iter = mv.begin();
        lowest = iter -> grade;
        cout << iter->name << " " << iter->id << endl;
    }
    else cout << "Absent" << endl;
    if(fv_size && mv_size) cout << highest - lowest <<endl;
    else cout << "NA" << endl;
    return 0;
}
