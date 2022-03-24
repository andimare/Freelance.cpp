//More test to be done 
#include <iostream>

class C11{
	public:
		int AC11;
};

class C12{
	public:
		int AC12;
};

class C21: public C12, public virtual C11{
};

class C22: public C12, public virtual C11{
};


class C3: public C21, public C22{
	public:
		void fC3();
		void show();
};

void C3::fC3(){
	AC11++;
	
	/*On this if uncommented,
	*AC12 will be ambiguous, for there will be two copies of it
	*via C21::AC12 & C22::AC12
	*/
	//AC12++;
}

int main(){
	C3 ac3;
	
	C21* pc21 = &ac3;
	C22* pc22 = &ac3;
	C11* pc11 = &ac3;
	
	/*copies of C12 are in
	*C21::C12 & C22::C12
	*/
	//C12* pc12 = &ac3;
	
	C12* apc12 = (C22*) &ac3;
	
	return 0;
}
