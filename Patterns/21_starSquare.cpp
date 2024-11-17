#include<iostream>
using namespace std;

// *****
// *   *
// *   *
// *   *
// *****

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    for(int i = 1; i<=N; i++){
        int starcount;
        if(i==1 || i==N){ starcount = N;}
        else starcount = 1; 
        for(int j = 1; j<=starcount; j++){
            cout<<"*";
            if(starcount == 1){
                for(int k = 1; k<=N-2; k++){
                    cout<<" ";
                }
                cout<<"*";
            }
        }
        cout<<endl;
    }
}