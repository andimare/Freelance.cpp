#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
	int array[] = {1,2,3,4,5,6,7,8};
	
	for(int elem : array){
		cout<<elem<<endl;
	}
	
	cout<<endl<<endl;
	
	unordered_map <string, string> names;
	names["Andrew"] = "Omare";
	names["Ian"] = "Mogoi";
	names["Kelvin"] = "Sagini";
	
	string name[] = {"Andrew", "Ian", "Kelvin"};
	
	for(int i = 0; i < 3; i++){
		cout<<names[name[i]]<<endl;
	}
	
	return 0;
}
