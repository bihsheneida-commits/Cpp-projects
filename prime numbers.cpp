#include <iostream>
using namespace std;
//function to print prime numbers from 1 to n
void primenumbers(int n){
	for(int i=2;i<=n;i++){
		bool isprime=true;
		for(int j=2;j*j<=i;j++)
		if(i%j==0){
			isprime=false;//checks if number is prime or not
			break;
		}
		if(isprime)cout<<i<<" ";//prints prime numbers from 1 to n 
	}
	}
	int main(){
		int n;
		cout<<"enter the value of n: ";//enter a number u wish prime numbers be printed n end
		cin>>n;
		cout<<"prime numbers are ";
		primenumbers(n);
		return 0;
	}
