#include<iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int spacecount = (N-1)*2;
    int starcount = N-1;

    for(int i = 1; i<=N; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        for(int k = 1; k<=spacecount; k++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        spacecount-=2;
    }
    for(int i = 1; i<=N-1; i++){
        for(int j = 1; j <= starcount; j++){
            cout<<"*";
        }
        for(int k = 1; k<=i*2; k++){
            cout<<" ";
        }
        for(int j = 1; j<= starcount; j++){
            cout<<"*";
        }
        cout<<endl;
        starcount-=1;
    }
}