//求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int b = 0;
    cout << "请输入数字" << endl;
    cin >> n;
    for (int i = 1; i <= n;i ++)
    {
        int a = 1;
        for (int j = 1; j <= i;j ++)
        {
        
         a*= j;
        }
        b += a;
    }
    cout << b << endl;
}
// 首先要想到使用两个for循环语句，进行嵌套循环！
//  for(int j=1;j<=a;j++)
//  {
//  	for(int i=1;i<=j;i++)
//  	{}
//  }
// 里面的for循环语句用来计算阶乘，以及统计阶乘的和！
// b+=a;