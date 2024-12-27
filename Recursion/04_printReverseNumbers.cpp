#include<iostream>
using namespace std;

void f(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    f(i-1,n);
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    f(N,N);
}