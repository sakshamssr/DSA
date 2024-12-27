#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout<<i<<endl;
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    f(1,N);
}