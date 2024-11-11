#include<iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int num = 1;
    
    for(int i = 1; i<=N;i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}