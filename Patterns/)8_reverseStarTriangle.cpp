#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int starcount = ((N-1)*2)+1;
    for(int i = 1; i<=N; i++){
        int j;
        for(int k = 0; k<=i; k++){
            cout<<" ";
        }
        for(j = starcount; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
        starcount-=2;
    }
}