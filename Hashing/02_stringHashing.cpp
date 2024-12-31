#include<iostream>
using namespace std;

int main(){
    string s = "abcdabehf";

    //creating hash 
    int hash[26]={0};
    for(int i = 0; i<= s.length(); i++){
        hash[s[i]-'a']+=1;
    }

    //fetching from hash array
    int q;
    cout<<"Enter a Number: ";
    cin>>q;
    while(q--){
        char ch;
        cout<<"Enter Char: ";
        cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }
}
