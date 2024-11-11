#include<iostream>
using namespace std;

// 1        1
// 12      21
// 123    321
// 1234  4321
// 123455432

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int numcount = 1;
    int spacecount = (N*2)-2;
    for(int i = 1; i<=N; i++){
        int num = 1;
        for(int j = 1; j<=numcount;j++){
            cout<<num;
            num+=1;
        }
        for(int k = 1; k<=spacecount; k++){
            cout<<" ";
        }
        int revnum=num-1;
        for(int r = 1; r<=revnum; r++){
            cout<<num-1;
            num-=1;
        }
        cout<<endl;
        numcount+=1;
        spacecount-=2;
    }
}