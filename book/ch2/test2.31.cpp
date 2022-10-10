#include<iostream>
#include<string>

using namespace std;

int main(void){
	const int v2=0;
	int v1=v2;
	int *p1=&v1;
	int &r1=v1;
	const int *p2=&v2;
	const int *const p3=&i;
	const int &r2=v2;
	
	constexpr int *np=nullptr;
	//np=&v1;

	r1=v2;
	p1=p2;
	p1=np;
	//np=p1;
	p2=p1;
	p1=p3;
	p2=p3;
	
	return 0;
}
