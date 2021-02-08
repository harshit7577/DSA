#include<iostream>
using namespace std;

int firstOccur(int a[],int n,int i,int key){

    if(i==n){
        return -1; //base case if element is not present in the array
    }
    if(a[i]==key){
        return i;
    }
    firstOccur(a,n,i+1,key);
}

int lastOccur(int a[],int n,int i,int key){
    
    if(i==-1){
        return -1; //base case if element is not present in the array
    }
     if(a[i]==key){
        return i;
    }
    lastOccur(a,n,i-1,key);

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int first=firstOccur(a,n,0,key);
    int last=lastOccur(a,n,n-1,key);
    if(first==-1 || last==-1){
        cout<<"Element not present in the array";
    }else{
        cout<<first+1<<endl<<last+1;
    }
    return 0;
}
