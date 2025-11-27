#include<iostream>
using namespace std;
namespace TY{
	class TYMARK{
		int theory,practical;
		public:
			TYMARK();
			TYMARK(int,int);
			void setTheory(int);
			void setPractical(int);
			int getTheory();
			int getPract();
			void display();
	};
}
