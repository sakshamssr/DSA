#include<iostream>
using namespace std;

// A
// BB
// CCC
// DDDD
// EEEEE

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    char alpha = 'A';
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            cout<<alpha;
        }
        cout<<endl;
        alpha+=1;
    }
}