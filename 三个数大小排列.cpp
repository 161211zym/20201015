#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "请输入三个数字" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    int arr[3] = {a, b, c};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i] = temp;
                cout << arr[i] << "    " << endl;
            }
        }
    }
    system("pause");
    return 0;
}
