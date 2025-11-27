#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		k=1;
		for(j=6-i;j>0;j--){
			cout<<"  ";
		}
		cout<<k<<" ";
		for(j=k+1,k=5-i;k<4;k++,j++){
			cout<<j<<" ";
		}
		j-=2;
		for(k=5-i;k<4;k++,j--){
			cout<<j<<" ";
		}
		
		
		cout<<endl;
	}
}
