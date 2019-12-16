/*
输入在第1行给出不超过105的正整数N，即参赛人数。
随后N行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号、
及其比赛成绩（百分制），中间以空格分隔。
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    int id,score;
    int max=0;
    int arr[200000]={0};
    for (int i=0; i<N; i++){
        cin>>id>>score;
        arr[id]+=score;
        if (arr[id]>arr[max]){
            max = id;
        }
    }
    cout<<max<<" "<<arr[max];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> m;
    int n;
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int num,score;
        cin >> num >> score;
        m[num] += score;
        if(m[num] > m[max])
        {
            max = num;
        }
    }
    cout << max << " " << m[max] << endl;
    return 0;
}