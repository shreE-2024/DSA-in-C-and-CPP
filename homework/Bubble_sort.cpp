#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,7,1,6,3};
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=;j<5;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
}
