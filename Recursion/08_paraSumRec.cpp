#include<iostream>
using namespace std;

int f(int N){
    if(N==0){
        return 0;
    }
    return N + f(N-1);
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    cout<<f(N);
}