#include<iostream>
using namespace std;

bool f(string S,int i){
    if(i>=S.length()/2) return true;
    if(S[i]!=S[S.length()-i-1]) return false;
    return f(S,i+1);
}

int main(){
    string S = "level";
    cout<<f(S,0);
}