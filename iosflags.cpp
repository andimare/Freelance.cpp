//A great day to wake up to
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int a = 45;
	double b = 3.1415324;
	string name ="andrew";
	
	cout<<setprecision(2)<<b<<endl;
	cout<<setiosflags(ios::oct)<<a<<endl;
	cout<<setiosflags(ios::uppercase)<<name<<endl;
	
	return 0;
}
