#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {1,2,3,1,3,2,12};

    //pre-compute
    map<int, int>mpp;
    for(int i = 0; i<=n; i++){
        mpp[arr[i]]++;
    }
    
    //printing map elements
    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    //fetch
    int q;
    cout<<"Enter a Number: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter a Number to check: ";
        cin>>number;
        cout<<mpp[number]<<endl;
    }
}
