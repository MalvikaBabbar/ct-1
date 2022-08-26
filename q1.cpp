//Malvika Babbar
//2010990438
//Set - 03
//Question 1

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	for(int i=0;i<n;i++){
		if(i%2!=0 && i!=n-1){
			swap(arr[i], arr[i+1]);
		}
	}
	
	cout<<"The sorted arrray is : "<<endl;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
