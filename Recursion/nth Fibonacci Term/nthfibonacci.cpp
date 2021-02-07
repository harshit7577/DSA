#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2); //in fibonacci series the first 2 terms are 0 & 1 and others are the sum of the prev 2 terms
}

int main(){

    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
} 
