//Binary search optimaization
#include<iostream>
using namespace std;

int main(){
	int x[]={0,1,2,3,4,5,6,7,8,9};
	int y = 8;
	int i = 5;
	
	if(x[i]>=y){
		do{
			if(x[i]==y)break;
			i++;	
		}while(x[i]!=y);
		cout<<x[i];
	}else{
		do{
			if(x[i]==y)break;
			i--;
		}while(x[i]!=y);
		cout<<x[i];
	}
	
	return 0;
}
