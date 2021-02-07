#include<iostream>
using namespace std;

int raiseTopower(int n,int p){

    if(p==0){
        return 1;
    }

    int ans=n*raiseTopower(n,p-1);

    return ans;
}

int main(){

    int n,p;
    cin>>n>>p;

    cout<<raiseTopower(n,p);

    return 0;
}
