#include<iostream>
using namespace std;

void f(int N[5],int i,int n){
    if(i<=(n-i)-1) return;
    swap(N[i],N[n-i-1]);
    f(N,i+1,5);
}

int main(){
    int N[5]={1,3,2,5,4};
    cout<<"Before Swap: ";
    for(int i = 0; i<=4; i++) cout<<N[i]<<" ";
    f(N,0,5);
    cout<<endl<<"After Swap: ";
    for(int i = 0; i<=4; i++) cout<<N[i]<<" ";
}