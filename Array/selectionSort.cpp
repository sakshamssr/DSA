#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,3,5,2,4};
    cout<<"Before Swap: "<<endl;
    for(int i = 0; i<=n-1; i++)cout<<arr[i]<<" ";

    for(int i = 0; i<=n-2; i++){
        int min = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<endl;
    cout<<"After Swap: "<<endl;
    for(int i = 0; i<=n-1; i++)cout<<arr[i]<<" ";
}
