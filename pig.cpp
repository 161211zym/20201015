#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
    cout << a, b, c;
    double d = b*b - (4* a*c);
	if ( d > 0)
	{
        cout << "������";
        cout << "��һ����Ϊ:" <<endl;
        cout << "�ڶ�����Ϊ:" << endl;
    }
	else if(d == 0)
	{
        cout << "ֻ��һ��:" << endl;
        cout << -b / (2 * a) << endl;
    }
	else
	{
        cout << "ʵ�����޽�" << endl;
    }
	system("pause");
	return 0;
}


