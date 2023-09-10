#include <iostream>
#include <cmath>//调用cmath函数库 

int main()
{
	using namespace std;
	
	double area;//双精度浮点型数据 
	cout << "Enter the floor area,in square feet ,of your home : ";
	cin >> area;
	double side;
	side = sqrt(area);//使用sqrt求平方 
	cout << "That's the equivakent of a square "<< side
		 << "feet to the side." <<endl;
	cout << "How fanscinating!"<< endl;
	return 0; 
}
