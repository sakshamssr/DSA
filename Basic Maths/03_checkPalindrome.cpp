#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int num = N;
    int reverse = 0;
    
    while(N!=0){
        reverse = (reverse*10)+(N%10);
        N=N/10;
    }
    cout<<reverse<<endl;
    
    if(num == reverse){
        cout<<"It's a Palindrome";
    }
    else{
        cout<<"It's not a Palindrome";
    }
}