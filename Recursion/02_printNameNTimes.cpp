#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Saksham"<<endl;
    f(i+1,n);
}

int main(){
    f(1,4);
}