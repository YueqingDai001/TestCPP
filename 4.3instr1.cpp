#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;//const 限定符
	char name[ArSize] ;
	char dessert[ArSize];
	
	cout << "Enter your name:\n";
	cin >>name;
	cout <<"Enter your favorite dessert:\n";
	cin >>dessert;
	cout <<"I have some delicious"<< dessert;
	cout <<"for yoiu," <<name <<".\n";
	return 0; 
}
