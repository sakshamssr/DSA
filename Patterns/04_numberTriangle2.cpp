#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = 1; i <= N; i++){
        int j;
        for (j = 1; j <= i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}