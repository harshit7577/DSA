#include<iostream>
using namespace std;

bool sortArr(int a[],int n){

    if(n==1){
        return true;
    }
    bool ans=sortArr(a+1,n-1); //we are decreasing the size of the arrray and checking if the next term is greater than the first term
    if(a[0]<a[1] && ans==true){
        return true;
    }
}

int main(){
    
    int a[]={1,7,3,6,5};
    cout<<sortArr(a,5);
    return 0;
}
