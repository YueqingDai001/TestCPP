#include <iostream>
using namespace std;
void simon(int);//新建一个没有返回值的函数 

int main()
{
	simon(4);//函数赋值4，调用simon输出信息 
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	cout << "Done!"<< endl;
	return 0; 
 } 
 
 
 
 void simon(int n)
 {
 	cout << "Simon says touch your toes " << n << " times." <<endl; 
 }
