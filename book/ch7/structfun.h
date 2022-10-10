#ifndef __structfun__h
#define __structfun__h
#include<iostream>
#include<string>
using namespace std;
struct Sales_data{
	//函数成员
	Sales_data()=default;
	Sales_data(const string& s):bookNo(s){}
	Sales_data(const string& s,unsigned n,double p):bookNo(s),uints_sold(n),revenue(p*n){}

	Sales_data(istream& );

	string isbn()const{return bookNo;}
	Sales_data& combine(const Sales_data& );
	double avg_price()const;
	//数据成员
	string bookNo;
	unsigned uints_sold=0;
	double revenue=0.0;

};
Sales_data add(const Sales_data&,const Sales_data&);
ostream& print(ostream&,const Sales_data&);
istream& read(istream&,Sales_data&);


#endif
