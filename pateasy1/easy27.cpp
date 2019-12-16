//输入在1行中分别给出P和A，格式为“Galleon.Sickle.Knut”，其间用1个空格分隔。这里Galleon是[0, 107]]区间内的整数，Sickle是[0, 
//17)区间内的整数，Knut是[0, 29)区间内的整数

# include <iostream>
using namespace std;

int main(){

    long int P, A;
    cin>>P>>A;



    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int pos1,pos2,a1,a2,a3,b1,b2,b3;
    int sum1,sum2,result,c1,c2,c3;
    pos1=s1.find('.');
    a1=stoi(s1.substr(0,pos1));
    pos2=s1.find('.',pos1+1);
    a2=stoi(s1.substr(pos1+1,pos2));
    a3=stoi(s1.substr(pos2+1));
 
    pos1=s2.find('.');
    b1=stoi(s2.substr(0,pos1));
    pos2=s2.find('.',pos1+1);
    b2=stoi(s2.substr(pos1+1,pos2));
    b3=stoi(s2.substr(pos2+1));
 
    sum1=a1*17*29+a2*29+a3;
    sum2=b1*17*29+b2*29+b3;
    result=sum2-sum1;
    c1=result/17/29;
    c2=result/29%17;;
    c3=result%29;
    if(c2<0) c2*=-1;
    if(c3<0) c3*=-1;
    cout<<c1<<"."<<c2<<"."<<c3<<endl;
    return 0;
}

#include <cstdio>
using namespace std;
int main()
{
    int G[2] = {}, S[2] = {}, K[2] = {};
    long long sum1, sum2, sub;
    scanf("%d.%d.%d %d.%d.%d", &G[0], &S[0], &K[0], &G[1], &S[1], &K[1]);
    sum1 = G[0] * 17 * 29 + S[0] * 29 + K[0];
    sum2 = G[1] * 17 * 29 + S[1] * 29 + K[1];
    sub = sum2 - sum1;
    if (sub < 0){
        printf("-");
        sub = -sub;
    }
    printf("%lld.%lld.%lld", sub / (17 * 29), sub % (17 * 29)/29,sub % 29);
    return 0;
}