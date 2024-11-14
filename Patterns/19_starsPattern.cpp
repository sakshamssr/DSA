#include<iostream>
using namespace std;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    for(int i = N; i>=1; i--){
        for(int j = 1;j<=i; j++){
            cout<<"*";
        }
        for(int s = 1; s<=(N-i)*2; s++){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int s = (N-i)*2; s>=1; s--){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}