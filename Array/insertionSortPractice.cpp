#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n]={2,1,3,5,4};
    cout<<"Before Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}

    for(int i = 1; i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl<<"After Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}
}