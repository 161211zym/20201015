#include <iostream>
using namespace std;
int main()
{
    //记录整除的个数
    for (int i = 100; i <= 200; i++) //100-200
    {
        int a = 0;
        for (int j = 2; j < i; j++) //2-i-1
        {
            if (i % j == 0)
            {
                a++;
                break;
            }
        }
        if (a == 0)
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}