#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    for(int i = 1; i<=N; i++){
        if(N%i==0){
            cout<<i<<" ";
        }
    }

}