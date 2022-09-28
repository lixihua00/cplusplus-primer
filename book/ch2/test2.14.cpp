#include<iostream>
#include<string>

using namespace std;

int i=100,sum=0;

int main(void){
	for(int i=0;i<=10;i++){
		sum+=i;
	}
	cout<<"i="<<i<<"\tsum="<<sum<<endl;
	return 0;
}
