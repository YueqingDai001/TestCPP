#include<iostream>

int main()
{
	using namespace std; 
	
	int carrots;
	
	cout << "How many carrots do you have?" << endl;
	cin >>carrots;//�ȴ�����ֵ 
	cout << "Here are two more.";
	carrots = carrots + 2;//����ı���ֵ+2 
	//the next line concatenates output
	cout << "Now you have " << carrots<<" carrots."<< endl;//���+2�ı���ֵ
	 
	return 0;
 } 
