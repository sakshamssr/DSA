#include<iostream>
using namespace std;

void f(int N[5], int n, int i){
    if(i>=n-i-1) return;
    swap(N[i],N[n-i-1]);
    f(N,n,i+1);
}

int main(){
    int N[5]={1,2,3,4,5};
    cout<<"Before Swap: "<<endl;
    for(int i = 0; i<=4; i++) cout<<N[i]<<" ";
    f(N,5,0);
    cout<<endl<<"After Swap: "<<endl;
    for(int i = 0; i<=4; i++) cout<<N[i]<<" ";
}