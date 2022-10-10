#include<iostream>
#include<string>
using namespace std;

int main(void){
	
	//string s1,s2;
	//cin>>s1>>s2;
	//cin>>s1;
	//cout<<s1<<s2<<endl;
	
	/*
	string word;
	 while(cin>>word){
		cout<<word<<endl;
	}
	*/
	
	/*
	string line;
	while(getline(cin,line)){
		
		if(!line.empty())
			cout<<line<<endl;
		else
			cout<<"empty input"<<endl;

		if(line.size()>20)
			cout<<line<<endl;
		else
			cout<<"size < 20"<<endl;
	}
	*/
	/*	
	string str("some thing");
	for(auto c:str){
		cout<<c<<endl;
	}
	*/

	//判断标点符号的个数
	/*
	string s3("hello world!!!");
	decltype(s3.size()) punct_cnt=0;
	for(auto c:s3){
		if(ispunct(c))
			punct_cnt++;
	}
	cout<<punct_cnt<<endl;
	*/

	//将字符变为大写
	/*
	string s4("hello world!!!");
	for(auto &c:s4){
		c=toupper(c);
	}
	cout<<s4<<endl;
	*/

	//使用下标迭代，将字符转换为大写，直到遇到空白字符
	string s5("hello world!!");
	for(decltype(s5.size()) index=0;index!=s5.size() && !isspace(s5[index]);index++)
		s5[index]=toupper(s5[index]);
	cout<<s5<<endl;


	return 0;
}
