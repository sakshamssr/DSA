// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    int number = N;
    int check = N;
    int count = 0;
    int sum = 0;

    while(N!=0){
        N=N/10;
        count+=1;
    }

    cout<<"Count: "<<count<<endl;

    for(int i = 1; i<=count; i++){
        sum += pow((number%10),count);
        number = number/10;
    }

    cout<<sum<<endl;

    if(check == sum){
        cout<<"It's a Armstrong Number";
    }
    else{
        cout<<"It's not a Armstrong Number";
    }
}