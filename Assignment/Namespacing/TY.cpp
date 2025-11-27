#include"TY.h"
namespace TY{
	TYMARK::TYMARK(){
		this->theory=0;
		this->practical=0;
	}
	TYMARK::TYMARK(int t,int p){
		this->theory=t;
		this->practical=p;
	}
	void TYMARK::setTheory(int t){
		this->theory=t;
	}
	void TYMARK::setPractical(int p){
		this->practical=p;
	}
	int TYMARK::getTheory(){
		return this->theory;
	}
	int TYMARK::getPract(){
		return this->practical;
	}
	void TYMARK::display(){
		cout<<this->theory<<endl;
		cout<<this->practical<<endl;
	}
}
