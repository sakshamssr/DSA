#include<iostream>
using namespace std;

int main (){
    int N1;
    int N2;
    
    int hcf;

    cout<<"Enter N1: ";
    cin>>N1;
    cout<<"Enter N2: ";
    cin>>N2;
    int min;

    if (N1>N2){
        min=N2;
    }
    else{
        min=N1;
    }

    for(int i = min; i>=1; i--){
        if(N1%i == 0 && N2%i == 0){
            hcf=i;
            break;
        }
    }
    cout<<hcf;
}