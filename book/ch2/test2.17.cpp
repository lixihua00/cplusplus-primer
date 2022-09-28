#include<iostream>
#include<string>

using namespace std;

int main(void){
	int i,&ri=i;
	i=5;
	ri=10;
	cout<<"i="<<i<<"\tri="<<ri<<endl;
	
	
	return 0;
}
