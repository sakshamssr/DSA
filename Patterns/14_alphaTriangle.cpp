#include<iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = 1; i<=N; i++){
        char alpha = 'A';
        for(int k = 1; k<=i; k++){
            cout<<alpha<<" ";
            alpha+=1;
        }
        cout<<endl;
    }
}