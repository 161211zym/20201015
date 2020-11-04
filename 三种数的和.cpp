#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    double sum1 = 0.0;
    double sum2 = 0.0;
    double sum3 = 0.0;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
        sum1 += i;
    for (int i = 1; i <= b; i++)
        sum2 += (i * i);
    for (int i = 1; i <= c; i++)
        sum3 += (1.0 / i);
    double sum = sum1 + sum2 + sum3;
    cout << sum << endl;
    return 0;
}