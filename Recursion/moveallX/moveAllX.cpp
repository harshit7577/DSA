#include<iostream>
#include<string>

using namespace std;

string moveAllX(string str){

    if(str.length()==0){
        return "";
    }

    char ch=str[0];
    string ans=moveAllX(str.substr(1));
    if(ch=='x' || ch=='X'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    string str;
    cin>>str;
    string ans=moveAllX(str);
    cout<<ans;
    return 0;
}
