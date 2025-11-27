#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,7,1,6,3};
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
}
