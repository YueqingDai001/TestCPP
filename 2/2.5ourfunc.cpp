#include <iostream>
using namespace std;
void simon(int);//�½�һ��û�з���ֵ�ĺ��� 

int main()
{
	simon(4);//������ֵ4������simon�����Ϣ 
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
