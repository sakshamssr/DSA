#include<iostream>
using namespace std;

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int num = N;
    for(int i = 0; i<(N*2)-1; i++){
        for(int j = 0; j<(N*2)-1; j++){
            int top = i;
            int left = j;
            int right = (2*N -2)-j;
            int down = (2*N - 2)-i;
            cout<<(N-min(min(top,down),min(left,right)))<<" ";  
        }
        cout<<endl;
    }
}