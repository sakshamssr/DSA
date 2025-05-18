#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n]={2,3,1,4,5};
    cout<<"Before Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}

    for(int i = 0; i<=n-1; i++){
        int min = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[i]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    cout<<endl<<"After Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i];}    
}