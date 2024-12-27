#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter a Number: ";
    cin>>N;
    // Vector can store elements just like array 
    // Don't have to define no of elements at the time of defining the vector unlike array.
    vector<int> store;

    for(int i = 1; i*i<=N; i++){
        if(N%i==0){
            store.push_back(i);
            if(N/i == i){
                continue;
            }
            store.push_back(N/i);
        }
    }
    sort(store.begin(),store.end());
    for(auto it : store){
        cout<<it<<" ";
    }
}