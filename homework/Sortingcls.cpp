#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of Array :";
	cin>>n;
	int i,j,current,arr[n];
	cout<<"Enter the element of Array :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
		current =arr[i];
		for(j=i-1;j>=0&&current<arr[j];j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=current;
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
