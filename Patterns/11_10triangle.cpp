#include<iostream>
using namespace std;

// 1
// 01
// 101
// 0101
// 10101

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int num = 0;
    for(int i = 0; i<N; i++){
        if(i%2==0) num = 1;
        for(int j = 0; j<=i; j++){
            cout<<num;
            num=!num;
        }
        cout<<endl;

    }
}
