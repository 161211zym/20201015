#include <iostream>
using namespace std;
int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  for (int num = 100; num < 1000; num++)
  {
    a = num % 10;
    b = num / 10 % 10;
    c = num / 100;
    if (a * a * a + b * b * b + c * c * c == num)
    {
      cout << num << endl;
    }
  }
    system("pause");

    return 0;
}