#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

void readCode(string text){
	int code = 0;
	
	unordered_map<char, int> freq;
	for (char ch: text) {
		int c = ch;
		code = code + ch - 96;
	}
	
	cout<<text<<" = "<<code * 10<<endl;
}

int main(){
	string read[] = {"berlin", "paris", "london", "rome", "toronto"};
	char ch = 'A';
	
	for(int i = 1;i < 27; i++){
		cout<<ch<<" "<<i<<endl;
		ch++;
	}
	
	for(int i = 0; i < 5; i++){
		readCode(read[i]);
	}
	
	return 0;
}
