#include<iostream>
#include<string>

using namespace std;

string remDuplicate(string str){

    if(str.length()==0){
        return "" ;
    }
    char ch=str[0];
    string ans=remDuplicate(str.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main(){
    string str;
    cin>>str;
    string ans=remDuplicate(str);
    cout<<ans;
    return 0;
}
