#include<iostream>
using namespace std;
int main(){
	int i,j;
	char k;
	for(i=1;i<=5;i++){
		k='A';
		for(j=5-i;j>0;j--){
			cout<<"  ";
		}
		for(j=1;j<=i+i-1;j++){
				
				cout<<k<<" ";
				k++;
		}
		cout<<endl;
	}
}
