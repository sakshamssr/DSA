#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n]={1,3,4,2,5};
    cout<<"Before Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}
    cout<<endl;

    for(int i = 1; i<=n-1; i++){
        cout<<"I: "<<i<<" ";
        int didswap = 0;
        for(int j = 0; j<=n-i-1; j++){
            cout<<"J: "<<j<<" ";
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
        cout<<endl;
        for(int s = 0; s<=n-1; s++){cout<<arr[s]<<" ";}
    }
    cout<<endl<<"After Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}
}