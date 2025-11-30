#include<iostream>
using namespace std;
//function to sum elements in an array
int sumarrayelements(int arr[], int size){
int sum=0;
for(int i=0;i<size;i++){
	sum+=arr[i];
}
return sum;
}
int main(){
	int size;
	cout<<"enter the size of the array:";
	cin>>size;
	
	int arr[size];
	cout<<"enter "<<size<<" elements:";
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	int sum = sumarrayelements(arr,size);
	cout<<"sum of array elements:"<<sum<<endl;
	return 0;
}
