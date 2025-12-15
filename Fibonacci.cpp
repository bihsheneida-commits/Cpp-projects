#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n<=0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibonacci (n-1) + fibonacci (n-2);
	}
}
int main(){
	int n;
	cout<<"enter the value of n: ";
	cin>>n;
	if(n<0){
		cout<<"enter a positive interger: "<<endl;
	}
	else{
		int result=fibonacci(n);
	cout<<"the "<<n<<"th fibonacci number is: "<<result<<endl;
}
	return 0;
}
