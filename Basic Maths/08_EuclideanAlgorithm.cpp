#include<iostream>
using namespace std;

int main(){
    int N1;
    int N2;
    cout<<"Enter N1: ";
    cin>>N1;
    cout<<"Enter N2: ";
    cin>>N2;
    
    while(N1>0 && N2>0){
        if(N1>N2){
            N1=N1%N2;
        }
        else{
            N2=N2%N1;
        }
    }
    cout<<N1<<" ";
    cout<<N2<<endl;
    if(N1 != 0){cout<<"HCF: "<<N1;}
    else{cout<<"HCF: "<<N2;}
}
