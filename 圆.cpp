#include <iostream>
using namespace std;
float yuan (float num1,float num2)
{
    
    float p = 3.14;
    float yz = 2 * p * num1;
    float ys = p * num1 * num1;
    float yb = 4 * ys;
    float yt = yb / 3 * num1;
    float t = p * num1 * num1 * num2;
    cout << "Բ�ܳ�" << yz << endl;
    cout << "Բ���" << ys << endl;
    cout << "Բ������" << yb << endl;
    cout << "Բ�����" << yt << endl;
    cout << "Բ�����" << t << endl;
    return 0;

}
int main()
{
    float r = 1.5;
    float h = 3;
    yuan(r, h);
    //Բ�ܳ���Բ�����Բ��������Բ�������Բ�����

    system("pause");
    return 0;
}
