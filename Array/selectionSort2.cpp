#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n] = {1,4,2,3,5,7,9,6,8,10};
    cout<<"Before Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}

    for(int i = 0; i<=n-1; i++){
        int min = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[i]){
                min = j;
                swap(arr[min],arr[i]);
            }
        }
    }

    cout<<endl<<"After Sort: ";
    for(int i = 0; i<=n-1; i++){cout<<arr[i]<<" ";}
}
