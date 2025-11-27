#include"namespace.h"
namespace SY{
	SYMARK::SYMARK(){
	this->comp_total=0;
	this->maths_total=0;
	this->eletro_total=0;
}
SYMARK::SYMARK(int c,int m,int e){
	this->comp_total=c;
	this->maths_total=m;
	this->eletro_total=e;
}
void SYMARK::setCom(int c){
	this->comp_total=c;
}
void SYMARK::setMath(int m){
	this->maths_total=m;
}
void SYMARK::setele(int e){
	this->eletro_total=e;
}
int SYMARK::getCom(){
	return this->comp_total;
}
int SYMARK::getMath(){
	return this->maths_total;
}
int SYMARK::getEle(){
	return this->eletro_total;
}
void SYMARK::display(){
	cout<<this->comp_total<<endl;
	cout<<this->maths_total<<endl;
	cout<<this->eletro_total<<endl;
}
}

