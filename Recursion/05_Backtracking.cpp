#include<iostream>
using namespace std;

void f(int i){
    if(i<1){
        return;
    }
    f(i-1);
    cout<<i<<endl;
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    f(N);
}