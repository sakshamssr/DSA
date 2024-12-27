#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int count;

    while(N>0){
        count += 1;
        cout<<N%10<<endl;
        N=N/10;
    }
    cout<<"Count : "<<count;
}