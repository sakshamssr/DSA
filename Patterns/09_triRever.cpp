#include<iostream>
using namespace std;

void pattern8(int N){
    int starcount = ((N-1)*2)+1;
    for(int i = -1; i<=N; i++){
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
void pattern7(int N){
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

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    pattern7(N);
    pattern8(N);
}
