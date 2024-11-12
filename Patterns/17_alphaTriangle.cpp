#include<iostream>
using namespace std;

//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    int alphacount = N-1;
    for(int i = N; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<" ";
        }
        char alpha = 'A';
        for(int k = 0;k<=(i-alphacount)-1;k++){
            cout<<alpha;
            alpha+=1;
        }
        alpha-=2;
        for(int j = 0; j<=(i-alphacount)-2;j++){
            cout<<alpha;
            alpha=alpha-1;
        }
        alphacount-=2;
        cout<<endl;
    }
}