#include <iostream>
#include <math.h>
using namespace std;
long long collatz(long long n){
	if(n==1){
		return n;
	}
	if(n%2==1 and n!=1){
		return (3*n)+1;
	}
	if(n%2==0){
		return n/2;
	}
	return 1;
}
int main( ){
	cout<<"Enter N please :";
	long long n;cin>>n;
	cout<<"The Serie of collatz intgers :";
	cout<<n<<" ";
	while(n!=1){
		n=collatz(n);
		cout<<n<<" ";
	}
}