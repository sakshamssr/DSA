#include<iostream>
using namespace std;

int count=0;

string f(string s,int i){
    if(i>=s.length()-i-1) return s;
    swap(s[i],s[s.length()-i-1]);
    count+=1;
    f(s,i+1);
    return s;
}

int main(){
    string S = "amanaplanacanalpanama";
    string N = S;
    cout<<S<<endl;
    N = f(S,0);
    cout<<N<<endl;
    if(S==N) cout<<"String is a Palindrome";
    else cout<<"String is not a Palindrome";
}