#include <iostream>
using namespace std;
int main()
{
    double sum = 0.0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - 1.0 / i;
        }
        else
        {
            sum = sum + 1.0 / i;
        }
    }
    cout << sum << endl;

    system("pause");
    return 0;
}
