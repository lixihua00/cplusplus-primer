#include"structfun.h"

double Sales_data::avg_price()const {
	if(uints_sold)
		return revenue/uints_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs){
	uints_sold+=rhs.uints_sold;
	revenue+=rhs.revenue;
	return *this;
}

istream& read(istream& is,Sales_data& item){
	double price=0;
	is>>item.bookNo>>item.uints_sold>>price;
	item.revenue=price*item.uints_sold;
	return is;
}

ostream& print(ostream& os,const Sales_data& item){
	os<<item.isbn()<<"\t"<<item.uints_sold<<"\t"
		<<item.revenue<<"\t"<<item.avg_price()<<endl;
	return os;
}

Sales_data add(const Sales_data& lhs,const Sales_data& rsh){
	Sales_data sum=lhs;
	sum.combine(rsh);
	return sum;
}

Sales_data::Sales_data(istream& is){
	read(is,*this);
}



