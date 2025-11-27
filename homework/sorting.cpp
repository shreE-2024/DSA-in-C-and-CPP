#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,7,1,6,3};
	int i,j,temp,swipe;
	for(i=0;i<5;i++){
		temp=arr[i];
		for(j=i+1;j<5;j++){
			if(temp>arr[j]){
				temp=arr[j];
				swipe=arr[j];
				arr[j]=arr[i];
				arr[i]=swipe;
			}
			
		}
	}
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
