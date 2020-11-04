#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
    cout << a, b, c;
    double d = b*b - (4* a*c);
	if ( d > 0)
	{
        cout << "有两根";
        cout << "第一个根为:" <<endl;
        cout << "第二个根为:" << endl;
    }
	else if(d == 0)
	{
        cout << "只有一根:" << endl;
        cout << -b / (2 * a) << endl;
    }
	else
	{
        cout << "实数域无解" << endl;
    }
	system("pause");
	return 0;
}


