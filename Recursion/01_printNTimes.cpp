#include<iostream>
using namespace std;

int count=0;

void f(){
    if(count == 5){
        return;
    }
    cout<<count<<endl;
    count++;
    f();
}
int main(){
    f();
}