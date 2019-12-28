#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int charge[24];  //资费

struct input{
    char name[25]; //姓名
    int mon,day,hour,min; //月，日，时，分
    bool line;  //on还是off
}ip[1010],temp,id;

bool cmp(input a,input b){
    if(strcmp(a.name,b.name)!=0) return strcmp(a.name,b.name)<0; //按字典序将姓名排序
    else if(a.mon!=b.mon) return a.mon<b.mon;
    else if(a.day!=b.day) return a.day<b.day;
    else if(a.hour!=b.hour) return a.hour<b.hour;
    else return a.min<b.min;
}
void getans(int on,int off,int &time,int &cost){
    temp=ip[on];
    while(temp.day<ip[off].day || temp.hour<ip[off].hour || temp.min<ip[off].min){
        time++;  //总分钟增加
        cost+=charge[temp.hour];  //话费增加
        temp.min++;  //当前时间增加1min
        if(temp.min>=60){
            temp.min=0;
            temp.hour++;   //下一个小时
        }
        if(temp.hour>=24){
            temp.hour=0;
            temp.day++;   //下一天
        }
    }
}
int main(){
    for(int i=0;i<24;i++) scanf("%d",&charge[i]);  //输入每个小时不同的资费
    int x;scanf("%d",&x);  //记录数
    char str[25];
    for(int i=0;i<x;i++){
        scanf("%s %d:%d:%d:%d %s",ip[i].name,&ip[i].mon,&ip[i].day,&ip[i].hour,&ip[i].min,str); //输入记录
        if(strcmp(str,"on-line")==0) ip[i].line=true;
        else ip[i].line=false;
    }
    sort(ip,ip+x,cmp);  //排序
    id=ip[0];int p,num=0,sum=0;   //id用来暂时保存同一个用户的姓名，p为记录on还是off，num记录匹配对数，sum记录同一用户的总资费
    for(int i=0;i<x;i++){
        if(strcmp(id.name,ip[i].name)==0){   //若是相同一个用户
            if(ip[i].line==true) p=1;        //on-line则p为1
            else{
                if(p==1){                    //当前记录为off-line且上一条是on-line
                    int time=0,cost=0;num++;
                    if(num==1) printf("%s %02d\n",ip[i].name,ip[i].mon); //在输出第一对匹配信息前先输出用户姓名与月份
                    getans(i-1,i,time,cost);  //求出本次通话时间与资费
                    sum+=cost;
                    printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",ip[i-1].day,ip[i-1].hour,ip[i-1].min,ip[i].day,ip[i].hour,ip[i].min,time,cost/100.0); 
                }
                p=0; //off-line则p为0
            }
        }
        else{             //下一个用户
            id=ip[i];
            num=0;sum=0;
            if(ip[i].line==true) p=1;
            else p=0;
        }
        if(strcmp(id.name,ip[i+1].name)!=0){  //若下一条记录是另一个用户，则把当前用户的总资费输出（如果有合法匹配的通话记录的话）
            if(num>0)
                printf("Total amount: $%.2f\n",sum/100.0);  //直接/100.0 就不用先设double型变量
        }
         
    }
    return 0;
}