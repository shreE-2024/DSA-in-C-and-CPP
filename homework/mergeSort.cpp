#include<iostream>
#include<stdlib.h>
int n;
using namespace std;
void mergesort(int*,int*,int,int);
void seprtion(int* arr,int start,int end){
	cout<<"\n In sepration Function "<<endl;
	int mid;
	mid= (start+end)/2;
	cout<<"\n mid :"<<mid<<"  Start :"<<start<<"  End :"<<end<<endl;
	if(end!=start){
		
		seprtion(arr,start,mid);
		seprtion(arr,mid+1,end);
	}
		
	else{
		int* arr1=new int[n];
		
		cout<<arr1[0]<<arr1[1]<<arr1[2]<<endl;
		mergesort(arr,arr1,start,end);
	}
}

void mergesort(int* arr,int* arr1,int start,int end){
	int i=0,j=0,k=0,temp;
	cout<<"\n In Mearge Function"<<endl;
	cout<<"\n Start :"<<start<<"  End :"<<end<<endl;
	if(arr1[0]==0){
		arr1[0]=arr[start];
		cout<<" arr1[0] :"<<arr1[0]<<endl;
	}
	while(i<=end){
		cout<<"\n int mearge while loop \n";
		while(arr[j]<arr1[k]){
			arr1[k+1]=arr1[k];
			arr1[k]=arr[j];
			j++;
		}
		while(arr[j]>arr1[k]){
			k++;			
		}
		arr1[k+1]=arr1[k];
		arr1[k]=arr[j];
		i++;
	}
	
	if(start==0&&end==n){
		for(i=0;i<n;i++){
			arr[i]=arr1[i];
		}
		
	}
}

int main(){
	int i;
	cout<<"Enter the size of Array :";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elements of Array :";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	seprtion(arr,0,n);
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
}

