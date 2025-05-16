#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n]={10,9,8,7,6,5,4,3,2,1};
    cout<<"Before Swap: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}

    for(int i = 1; i<=n-1; i++){
        for(int j = 0; j<=n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<endl;
        for(int s = 0; s<=n-1; s++){cout<<arr[s]<<" ";}
    }
    cout<<endl<<"After Swap: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}
}