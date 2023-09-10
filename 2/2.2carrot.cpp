#include <iostream>
int main()
{
	using namespace std;
	
	int carrots;//创建变量carrots
	
	carrots = 25;//给变量赋值 5
	cout << "I have ";//打印输出 
	cout << carrots;//打印变量值 
	cout << " carrots.";
	cout << endl;//换行 
	carrots = carrots - 1;//变量值carrot-1
	cout << "Crunch ,crunch. Now I have"  << carrots << "carrots." << endl;//使用拼接的方式输出变量和值 
	return 0;//返回值0 
}
