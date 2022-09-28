#include<iostream>
#include<string>

using namespace std;
int reused=42;

int main(void){
	int unique=0;
	cout<<reused<<"\t"<<unique<<endl;
	int reused=0;
	
	cout<<reused<<"\t"<<unique<<endl;
	
	cout<<::reused<<"\t"<<unique<<endl;
	return 0;
}
