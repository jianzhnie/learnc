# include <iostream>
# include <algorithm>
# include <map>
using namespace std;
#define MAX 2005

struct student
{
    string id;
    int best;
    int score[4];
    int rank[4];
} stu[MAX];

int flag = -1;
bool cmp(student a, student b){
    return a.score[flag] > b.score[flag];
}

int main(){
    int n, m;
    string id;
    map<string, int> idmap; 
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>stu[i].id>>stu[i].score[1]>>stu[i].score[2]>>stu[i].score[3];
        stu[i].score[0]=(stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/3.0 + 0.5;
    }
    for (flag=0; flag<=3; flag++){
        sort(stu, stu +n, cmp);
        stu[0].rank[flag]=1;
        for (int i =1; i <n; i++){
            stu[i].rank[flag]= i+1;
            if (stu[i].score[flag] == stu[i-1].score[flag])
                stu[i].rank[flag] = stu[i-1].rank[flag];
        }
    }
    for(int i = 0; i < n; i++) {
        stu[i].best = 0;
        int minn = stu[i].rank[0];
        for(int j = 1; j <= 3; j++) {
            if(stu[i].rank[j] < minn) {
                minn = stu[i].rank[j];
                stu[i].best = j;
            }
        }
        idmap[stu[i].id] = i+1;
    }
    char c[5] = {'A', 'C', 'M', 'E'};
    for(int i = 0; i < m; i++) {
        cin>>id;
        int idx = idmap[id];
        if (idx){
            idx -=1;
            int best = stu[idx].best;
            cout<<stu[idx].rank[best]<<" "<<c[best]<<"\n";
        }
        else
        {
            cout<<"N/A\n";
        }
    }
    return 0;
}