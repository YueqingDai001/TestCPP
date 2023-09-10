#include<iostream>

int main()
{
	using namespace std; 
	
	int carrots;
	
	cout << "How many carrots do you have?" << endl;
	cin >>carrots;//等待输入值 
	cout << "Here are two more.";
	carrots = carrots + 2;//输入的变量值+2 
	//the next line concatenates output
	cout << "Now you have " << carrots<<" carrots."<< endl;//输出+2的变量值
	 
	return 0;
 } 
