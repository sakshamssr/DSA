#include<iostream>
using namespace std;

int main(){
    int count;
    int n;
    cin>>n;
	while (n > 0) {
		n = n/10;
		count +=1;
	}
	return count;
}