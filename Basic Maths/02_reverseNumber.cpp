#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    int number = 0;

    while(N!=0){
        number = (number*10)+(N%10);
        N = N/10;
    }

    cout<<number;
}