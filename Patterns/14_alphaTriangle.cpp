#include<iostream>
using namespace std;

// A
// AB
// ABC
// ABCD
// ABCDE

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = 1; i<=N; i++){
        char alpha = 'A';
        for(int k = 1; k<=i; k++){
            cout<<alpha;
            alpha+=1;
        }
        cout<<endl;
    }
}