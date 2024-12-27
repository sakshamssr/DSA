#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int count;

    while(N!=0){
        N=N/10;
        count+=1;
    }
    cout<<count;

    return 0;
}

