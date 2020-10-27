#include <iostream>
using namespace std;
int main()
{
    for (int i = 1000; i <= 2000; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }
    system("pause");

    return 0;
}