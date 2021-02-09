#include<iostream>
using namespace std;

void toh(int n,char src,char dest,char hlpr){

    if(n==0){
        return;  //base case
    }
    toh(n-1,src,hlpr,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    toh(n-1,hlpr,dest,src);
}

int main(){

    int n;
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}
