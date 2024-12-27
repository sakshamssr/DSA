#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int count=0;

    for(int i = 1; i*i<=N; i++){
        if(N%i==0){
            count+=1;
            if(N/i==i){
                continue;
            }
            count+=1;
        }
    }
    cout<<count<<endl;
    if(count == 2){
        cout<<"It's a Prime Number";
    }
    else{
        cout<<"It's not a Prime Number";
    }
    
}