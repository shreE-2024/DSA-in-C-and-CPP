#include"Array.h"

Array::Array(int s){
	index=-1;
	size=s;
	int* ptr = new int[size];
}
bool Array::isEmpty(){
	if(index==-1){
		return true;
	}
	else{
		return false;
	}
}

bool Array::isFull(){
	if(index==size-1){
		return true;
	}
	else{
		return false;
	}
}


bool Array::addElement(int e){
	if(isFull()){
		cout<<"\n Not Enough memery...";
		return false;
	}
	else:{
		pArr[++index]=e;
		return true;
	}
}

bool Array::removeElement(int e){
	if(isEmpty()){
		cout<<"\n Array is Empty...";
		return false;
	}
	else{
		int i,j=0;
		for(i=0;i<index;i++){
			if(pArr[i]==e){
				j++;
			}
			pArray[i]=pArray[i+j];
		}
		return true;
	}
}

bool Array::display(){
	int i;
	for(i=0;i<size;i++){
		cout<<endl<<pArray[i]<<" ";
	}
}
