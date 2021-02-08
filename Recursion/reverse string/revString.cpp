#include<iostream>
#include<string>

using namespace std;

void revStr(string str){

    if(str.length()==0){
        return ;
    }

    revStr(str.substr(1)); //substring from 1 to last index
    cout<<str[0];
}

int main(){
    string str;
    cin>>str;
    revStr(str);
    return 0;
}
