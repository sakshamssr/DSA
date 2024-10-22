#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = N; i>=1; i--){
        int j;
        for(j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}