#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];

    //precompute
    int hash[11]={0};
    for(int i = 0; i<=n; i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter another Number: ";
    cin>>q;
    while(q--){
        //fetch
        int number;
        cout<<"Number to Fetch: ";
        cin>>number;
        cout<<hash[number]<<endl;
    }
}