#include<iostream>
using namespace std;

int sumTilln(int n){

    if(n==0){
        return 0;
    }

    int ans=n+sumTilln(n-1);

    return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<sumTilln(n);

    return 0;
}
