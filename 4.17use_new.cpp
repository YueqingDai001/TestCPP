#include <iostream>
int main()
{
	using namespace std;// 使用名称空间
	int nights = 1001;//定义变量nights 并赋值1001
	int * pt = new int;//定义指针并使用new 运算符分配地址
	*pt = 1001;//使用* 可以知道存储在这个地址的值，给这个地方赋值1001

	cout << "nights value = ";//打印引号内文字
	cout << nights << ":location " << &nights <<endl;//打印nights的值，打印nights地址，结束换行符
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt  <<endl;//打印*pt的值，打印pt的地址
	double * pd = new double;
	*pd = 10000001.0;

	cout << "double ";
	cout << "value = " << *pt << ": location = " << pt <<endl;
	cout << "location of pointer pd :" << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " <<sizeof pd ;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	return 0;
}
