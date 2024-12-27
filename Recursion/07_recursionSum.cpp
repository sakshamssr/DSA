#include<iostream>
using namespace std;

void f(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    
    f(N,0);
}