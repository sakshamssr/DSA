#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int starscount=1;
    
    for(int i=1; i<=(2*N); i++){
        for(int j=1; j<=starscount; j++){
            cout<<"*";
        }
        if(i<N){
            starscount+=1;
        }
        else{
            starscount-=1;
        }
        cout<<endl;
    }
}