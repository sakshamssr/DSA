#include<iostream>
using namespace std;

int f(int N){
    if(N<=1)return N;
    return f(N-1)+f(N-2);
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    cout<<f(N);
}