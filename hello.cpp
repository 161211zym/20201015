#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 9)
        {
            n++;
            if (i / 10 % 9 == 0)
            {
                n++;
            }
        }
    }
    cout << "一共出现9的次数为：" << n << endl;
}