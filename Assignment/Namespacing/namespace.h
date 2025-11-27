#include<iostream>
using namespace std;
namespace SY{
	class SYMARK{
		int comp_total,maths_total,eletro_total;
		public:
			SYMARK();
			SYMARK(int,int,int);
			void setCom(int);
			void setMath(int);
			void setele(int);
			int getCom();
			int getMath();
			int getEle();
			void display();
	};
}

