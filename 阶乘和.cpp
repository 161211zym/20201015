//��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int b = 0;
    cout << "����������" << endl;
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
// ����Ҫ�뵽ʹ������forѭ����䣬����Ƕ��ѭ����
//  for(int j=1;j<=a;j++)
//  {
//  	for(int i=1;i<=j;i++)
//  	{}
//  }
// �����forѭ�������������׳ˣ��Լ�ͳ�ƽ׳˵ĺͣ�
// b+=a;