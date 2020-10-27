#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {108, 90, 40, 58, 38, 23, 41, 19, 23, 99};
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "最大值为：" << max << endl;
    system("pause");

    return 0;
}