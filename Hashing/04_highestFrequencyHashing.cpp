#include<bits/stdc++.h>
using namespace std;

int main(){
    int n[9] = {1,1,2,2,2,2,7,7,7};
    
    // pre-compute
    map<int, int>mpp;
    for(int i = 0; i<9; i++){
        mpp[n[i]]++;
    }

    int begin = mpp.begin()->second;
    int maxnum;

    for(auto it : mpp){
        // cout<<"Begin: "<<it.first<<" Second: "<<it.second<<endl;
        if(it.second > begin){
            begin = it.second;
            maxnum = it.first;
        }
    }
    cout<<"Max Frequency: "<<maxnum;
    
}