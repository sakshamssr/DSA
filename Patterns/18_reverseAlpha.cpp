#include<iostream>
using namespace std;

// E
// D E
// C D E
// B C D E
// A B C D E

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;

    for(int i = 1; i<=N; i++){
        char alpha='A'+N;
        alpha-=i;
        for(int j = 1; j<=i;j++){
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;
    }
}