#include "bits/stdc++.h"
using namespace std;
#define MAX 10000

struct student
{
    char id[100];
    float score;
    char name[100];
} stu[MAX];

bool cmp(struct student a,struct student b)
{
    return a.score>b.score;
}

int main()
{
    int n,i=0;
    cin>>n;
    for(i=0; i<n; i++)
        {
            cin>>stu[i].name>>stu[i].id>>stu[i].score;
        }
    sort(stu,stu+n,cmp);
    cout<<stu[0].name<<" "<<stu[0].id<<endl;
    cout<<stu[n-1].name<<" "<<stu[n-1].id<<endl;
    return 0;
}