#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    cout << "����������1= " << endl;
    cin >> n;
    cout << "����������2= " << endl;
    cin >> m;
    int min = 0;
    if (n < m)
    {
        min = n;
    }
    else
    {
        min = m;
    }
    for (int i = min; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
    system("pause");

    return 0;
}