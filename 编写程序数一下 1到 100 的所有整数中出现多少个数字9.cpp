#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % 10== 9 && i != 99)
        {
            n++;
        }
          if (i / 10 == 9)
          {
             n++;
          }
    }
    cout << "一共出现9的次数为：" << n << endl;
    system("pause");

    return 0;
}