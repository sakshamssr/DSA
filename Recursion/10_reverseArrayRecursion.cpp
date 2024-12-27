#include<iostream>
using namespace std;

void f(int N[5], int l, int r){
    if(l>=r) return;
    swap(N[l],N[r]);
    f(N,l+1,r-1);
}

int main(){
    int N[5]={1,3,2,5,4};
    cout<<"Before Swap: ";
    for(int i = 0;i<=4; i++) cout<<N[i]<<" ";
    f(N,0,4);
    cout<<endl<<"After Swap: ";
    for(int i = 0;i<=4; i++) cout<<N[i]<<" ";
}