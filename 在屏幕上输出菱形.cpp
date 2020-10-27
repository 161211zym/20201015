#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    cout << "输入菱形的边长 ： " << endl;
    cin >> n;
    cout << "输出的图形为 ： " << endl;
    //上半层
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - 1) * 2 - 1 - i * 2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    system("pause");

    return 0;
}