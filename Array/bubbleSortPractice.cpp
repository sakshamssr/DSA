#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n]={2,1,3,5,4};
    cout<<"Before Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}

    for(int i = 1; i<=n-2; i++){
        for(int j = 0; j<=n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl<<"After Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}
}