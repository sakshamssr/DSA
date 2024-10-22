#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int starcount=1;
    for(int i = N; i>=1; i--){
        int spacecount = i-1;
        int j;
        // int space = ' ';
        for(j=1; j<=spacecount;j++){
            cout<<" ";
        }
        int k;
        for(k=1; k<= starcount; k++){
            cout<<"*";
        }
        cout<<endl;
        starcount+=2;
    }
}
