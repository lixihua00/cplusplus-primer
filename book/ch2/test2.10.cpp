#include<iostream>
#include<string>
using namespace std;

string glb_str;
int glb_int;

int main(void){
	int loc_int;
	string loc_str;
	cout<<"glb_int:"<<glb_int<<"\tloc_int:"<<loc_int<<endl;
	//int为内置类型，函数外默认初始化值为0，函数内部未定义初始化值
	cout<<"glb_str:"<<glb_str<<"\tloc_str:"<<loc_str<<endl;
	//string为复合类型，但是string类型本身接受无参数的初始化方式，
	//在函数内外都默认初始化为空串。
	return 0;

}
