#include <iostream>
#include <cmath>//����cmath������ 

int main()
{
	using namespace std;
	
	double area;//˫���ȸ��������� 
	cout << "Enter the floor area,in square feet ,of your home : ";
	cin >> area;
	double side;
	side = sqrt(area);//ʹ��sqrt��ƽ�� 
	cout << "That's the equivakent of a square "<< side
		 << "feet to the side." <<endl;
	cout << "How fanscinating!"<< endl;
	return 0; 
}
