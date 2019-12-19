// 输入：
// 4
// Tom CS000001 59
// Joe Math990112 89
// Mike CS991301 100
// Mary EE990830 95
// 60 100
// 输出例子:
// Mike CS991301
// Mary EE990830
// Joe Math990112

# include <iostream>
# include <string>
# include "bits/stdc++.h"
using namespace std;
#define MAX 10000

struct student
{
    char id[10];
    float score;
    char name[10];
} stu[MAX];

bool cmp(struct student a,struct student b)
{
    return a.score>b.score;
}

int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>stu[i].name>>stu[i].id>>stu[i].score;
    }
    sort(stu,stu+N,cmp);
    int low, high;
    cin>>low>>high;
    int sum =0;
    for(int i=0; i<N; i++)
    {
        if(stu[i].score>=low && stu[i].score<=high)
        {
            cout<<stu[i].name<<" "<<stu[i].id<<endl;
            sum+=1;
        }
    }
    if (sum==0) {
        cout<<"NONE"<<endl;
    }
    return 0;
}
