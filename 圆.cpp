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
    cout << "圆周长" << yz << endl;
    cout << "圆面积" << ys << endl;
    cout << "圆球表面积" << yb << endl;
    cout << "圆球体积" << yt << endl;
    cout << "圆柱体积" << t << endl;
    return 0;

}
int main()
{
    float r = 1.5;
    float h = 3;
    yuan(r, h);
    //圆周长，圆面积，圆球表面积，圆球体积，圆柱体积

    system("pause");
    return 0;
}
