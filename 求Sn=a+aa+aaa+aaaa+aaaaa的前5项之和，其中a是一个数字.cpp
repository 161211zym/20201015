#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cout << "���������� ��" << endl;
    cin >> a;
    int sn = 0;
    int t = 0;
    for (int i = 0; i < 5; i++)
    {
        t = a + t * 10;
        sn = sn + t;
    }
    cout << sn << endl;

    system("pause");
    return 0;
}