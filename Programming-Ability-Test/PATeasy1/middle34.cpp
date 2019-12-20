# include <iostream>
# include <string>
using namespace std;

void Display(char c){
    switch(c) {
        case '0' : 
            cout<<"ling";
            break;
        case '1' : 
            cout<<"yi"; 
            break;
        case '2' :
             cout<<"er"; 
             break;
        case '3' : 
            cout<<"san"; 
            break;
        case '4' : 
            cout<<"si"; 
            break;
        case '5' : 
            cout<<"wu"; 
            break;
        case '6' : 
            cout<<"liu"; 
            break;
        case '7' : 
            cout<<"qi"; 
            break;
        case '8' : 
            cout<<"ba"; 
            break;
        case '9' : 
            cout<<"jiu"; 
            break;
    }
}

int main(){
    string str;
    cin >>str;
    int len = str.length();
    int sum =0;
    for(int i=0; i<len; i++){
        int c = str[i]-'0';
        sum +=c;
    }
    std::string str2 = std::to_string(sum);
    //string str2 = to_string(sum);
    for (int i=0; i<str2.length(); i++){
        //cout<<str2[i];
        Display(str2[i]);
        if (i<str2.length()-1) cout<<" ";
    }
    cout<<endl;
    return 0;
}