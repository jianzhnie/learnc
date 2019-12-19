# include <iostream>
# include <string>
# include "bits/stdc++.h"
using namespace std;

#define MAX 100001

struct student
{
    int id;
    int score;
    char name[10];
} stu[MAX];

int c;
bool cmp(struct student a, struct student b)
{
    if (c==1){
        return a.id<b.id;
    }
    else if(c==2){
        if(strcmp(a.name, b.name) == 0) return a.id < b.id;
        return strcmp(a.name, b.name) <= 0; 
    }
    else {
        if(a.score == b.score) return a.id < b.id;
        return a.score <= b.score;
    }
}

int main()
{
    int N;
    cin>>N>>c;
    for(int i=0; i<N; i++){
        scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].score);
    }
    sort(stu,stu+N, cmp);
    for(int i=0; i<N; i++)
    {
        printf("%06d %s %d\n", stu[i].id, stu[i].name, stu[i].score);
    }
    return 0;
}
