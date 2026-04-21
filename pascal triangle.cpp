#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number of rows: ";//gets user to enter n
	cin>>n;
	int arr[n][n];//2D array
	for(int i=0;i<n;i++){
	for(int j=0;j<=i;j++){
		if(j==0||j==i){
		arr[i][j]=1;///for the first and lst element
		}
		else{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	}
	for (int i=0;i<n;i++){//display pascal's triangle
	for(int space=0;space<n-i-1;space++){//prints spaces for the shape
		cout<<" ";
	}
	for(int j=0;j<=i;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}
	
	return 0;
}
