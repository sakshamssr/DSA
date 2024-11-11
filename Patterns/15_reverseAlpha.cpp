#include<iostream>
using namespace std;

// ABCDE
// ABCD
// ABC
// AB
// A

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = N; i>=1; i--){
        char alpha = 'A';
        for(int j = i; j>=1; j--){
            cout<<alpha;
            alpha+=1;
        }
        cout<<endl;
    }
}