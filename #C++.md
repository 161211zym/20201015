# c++

## 1 、入门

### 1.1编写 步骤

创建项目 （空项目）创建文件 编写代码 运行程序 

书写 helloworld代码

```c++
#include <iostream>
using namespace std;
int main()
{
 
    cout <<"hello world"<<endl;
        system ("pause");
    return 0;
}
```

### 1.2 注释

单行   上方or末尾

//。。。。

多行  上方

/* 。。。。*/

### 1.3变量 

**不要用关键字给变量或常量命名**



给一段空间命名 方便管理

**变量创建的语法： 数据类型 变量名= 变量的初始值**

```c++
#include <iostream>
using namespace std;
int main()
{
    //变量创建的语法： 数据类型 变量名=变量初始值
    int a=10;
    cout <<"a="<<a<<endl;
        system ("pause");
    return 0;
}
```

### 1.4 常量

不要用关键字给变量或常量命名

**不可更改**的 数据

1、函数体外面 

`#define` 宏常量 **#define 常量名 常量值**

`#define day 7`

```c++
#include<iostream>
using namespace std;
#define Day 7

int main()
{
    cout <<"一周一共有"<<Day<<"天"<<endl;// Day=8; 报错 宏常量不可更改

    system ("pause");
        
        return 0;
}
```

(一旦修改就会报错 )

2、函数体里面

`const` 修饰的变量 (也是常量 )**const 数据类型 变量名=常量值**

`comst int month = 12;`(一旦修改就会报错 )

```c++
#include<iostream>
using namespace std;

int main()
{
    const int month=12
    cout <<"一年一共有"<<Day<<"个月"<<endl;// month = 24;//报错 常量不可更改

    system ("pause");
        
        return 0;
}
```

### 1.5关键字

特殊标识符(系统征用了)

`int int=10`// 错误 第二个  int是关键字不可以当作变量名

### 1.6标识符命名规则 

起名：见名知意

1.6.1 标识符不能是关键字

1.6.2 标识符只能由**字母、数字、下划线**组成

1.6.3 第一个字符必须为**字母或下划线**

1.6.4 标识符中的字母区分**大小写**

## 2数据类型

### 2.1 整型 

整数类型 int // 数据类型 变量名= 变量初始值// 给变量分配一块合适的内存空间

```c++
#inculde (iostream)
using namespace std;
int main()
{
//短整型 
short num1 = 10;
//整型
 int num2 = 10;
 //长整型
 long num3 = 10;
 //长长整型
 long long num4 = 10;//所占内存空间大小不同 超过最大范围就会出错
   cout<<"num1="<< num1<<endl;
   cout<<"num2"<<num2<<endl;
   cout<<"num3"<<num3<<endl;
   cout<<"num4"<<num4<<endl;
system ("pause")'
    return 0
}


```

### 2.2sizeof 关键字

统计数据类型所占空间大小 

语法 sizeof (数据类型/变量)

```c++
#include (iostream)
using namespace std;
int main（）
{
    
    short num1=10
        cout<<"short占用空间是："<<sizeof(short)<<endl; //short 也可放进 num1 变量名
    system ("pause")
        return 0
}short< int<= long <= longlong
```

short < int <= long <= long long 

### 2.3 实型  浮点型

用于表示小数 

单精度  float

双精度 double

```c++
folat f1 = 3.14f;//默认把一个小数当作双精度 所以数字后面加一个f
cout<<"f1="<<f1<<endl;
```

```c++
double d1 = 3.1415926;//默认输出六位有效数字3.14159 需要全部输出则要额外配置
cout<<"d1="<<d1<<endl;
```

//默认输出六位有效数字3.14159 需要全部输出则要额外配置

统计float 和double占用的存储空间有多大 

```c++
cout <<"float所占存储空间是"<<sizeof(float)<<endl;//4
cout<<"double所占的存储空间是"<<sizeof(double)<<endl;//8
```

```c++
//科学计数法
float f2=3e2;//e后面2为正数 该数表示为3*10^2 300
cout<<"f2="<<f2<<endl;

float f3=3e-2;//e后面为负数 该数表示 3*0.1^2 0.03
cout<<"f3="<<f3<<endl;
```

### 2.4 字符型

字符变量用于显示**单个字符**

语法：char  变量名称= ‘单个字符’（用**单引号**引起来）

注：1、非存本身  而是对应的ASCII编码存入存储单元 2、字符型变量之占用一个字节



创建方式

```c++
char ch = 'a';
    cout <<ch<<endl;
```

所占内存

```c++
cout << "char所占内存空间是"<<sizeof(char)<<endl;
```

常见错误

```c++
char ch2 = "b";//创建字符型变量时候，要用单引号
```

```c++
char ch3 = "abcde";//只能有一个字符
```

对应的ASCII编码

```c++
cout <<(int)ch<<endl;//把字符型强行转换成整型
```

a-97 A-65

### 2.5转义字符

不能显示出来的ASCII字符 （警报退格 换页等）

```c++
//换行符 \n
cout << "helloworld" << endl;
cout <<"helloworld\n";//与上同理
```

```c++
//反斜杠 \\
cout <<"\"<<endl;//输出失败 
    cout<<"\\"<<endl;//可以输出 两个反斜杠可以输出一个反斜杠
```

```c++
//水平制表符
cout << "aaa\thelloworld" <<endl;//输出aaa     helloworld (aaa 和空格一共占八个位置五个空格)
cout << "aaaa\thelloworld" <<endl;//输出aaaa    helloworld (四个空格）
```

```c++
cout << "aaa\thelloworld" <<endl;
cout << "aaaaa\thelloworld" <<endl;
cout << "aa\thelloworld" <<endl;
//输出 aaa     helloworld 
//    aaaaa   helloworld
//    aa      helloworld 整体是为了整齐好看美观
```

### 2.6字符串  //char 变量名[]=“字符串值”  // string 变量名=“字符串值”

一串字符

1、char 变量名[]=“字符串值”

注意1、 中括号[]

​       2、双引号引字符串

```c++
int main(){
    
char str[] = "hello world";//给helloworld 起个名
cout << str <<endl;//输出
    system("pause");
    return 0;
}
```

 2、string 变量名=“字符串值”

注意包含一个头文件 

```c++
#include<iostream>
using namespace std;
#include<string>
int main()
{
    char str="helloworld";
        cout <<str<<endl;
    system("pause");
        return 0;
}
```

### 2.7布尔类型 （表示真or假）

bool 只两个值 true 1// false 0

且只占一个字节

```c++
int main(){

//创建bool数据类型
bool flag = true;//flag代表真 1
cout << flag <<endl;
flag = false;//flag代表假 0
cout << flag <<endl;

//查看bool类型所占内存空间
cout << "bool类型所占内存空间："<<sizeof(bool)<<endl;//1
system("pause");
    return 0;
}
```

### 2.8数据的输入  cin

语法 cin >>变量  

输出cout<<

```c++
#include （iostream）
using namespace std;
#include<string>
int main(){
    
//整型
int a = 0;
    cout << "请给整型变量a赋值："<<endl;
cin >> a;//请给整型变量a赋值：第二行光标闪烁等待数据输入
cout<<"整型变量a="<<a<<endl;

    
    //浮点型
float f = 3.14f；
    cout  << "请给浮点型变量f赋值" <<endl;
cin >> f;
cout << "浮点型变量f="<<f<<endl;

    
    //字符型
char ch b = 0;
    cout <<"请给字符型变量ch赋值"<< endl;
cin >> ch;
cout <<"字符型变量ch="<<endl;

    
    //字符串型
string str = "hello";
cout << "请给字符串str赋值"<<endl;
cin >> str;
cout <<"字符串str="<<str<<endl;
//需要在头文件中添加#include <string>

    
    //布尔类型
bool flag = flase;
cout <<"请给布尔类型flag赋值"<<endl;
cin >> flag;
cout <<"布尔类型flag="<< endl;
    
    
    system("pause");
    return 0;
   
}

```

## 3运算符

### 3.1算数运算符

加减乘除(除数永不为零)

```c++
//加减乘除
int a1 = 10;
int b1 = 3;
cout << a1+b1 << end1;
cout << a1-b1 << endl;
cout << a1*b1 << endl;
cout << a1/b1 << endl;//两个整数相除结果依然是整数 3
int a2 = 10;
    int b2=20;
cout << a2/b2 <<endl;//0
int a3 = 10;
    int b3 = 0;
cout << a3/b3 << endl;//程序报错 除数不为0

```

取余

```c++
int a = 10;
int b = 3;
cout << a/%b <<endl;
```

前后置递增减

前后置： 前置递增 先变量+1 然后进行表达式运算//              后置递增 先进行表达式运算 后变量+1

```c++
int a = 10;
int b = ++a*10;
cout << "a=" << a <<endl;10
cout << "b=" << b <<endl;110
    int c = 10;
int d = c++*10;
cout << c << endl;11
cout << d << endl;100

```

### 3.2赋值运算

=      //    +=       //  - =      //     *=      //       /+   //      % =         

```c++
//=
int a = 10;
a=100;
cout << "a=" << a << endl;

// +=
a = 10;
a += 2;// a=a+2 12
    cout << "a="<< a << endl;
//-=
a = 10;
a -= 2;// a=a-2 8
    cout << "a="<< a << endl;

///=
a = 10;
a /= 2;// a=a/2 5
    cout << "a="<< a << endl;

//%=
a = 10;
a %= 2;// a=a%2 0
    cout << "a="<< a << endl;



```

3.3比较运算符 

```c++
//==
int a = 10;
    int b = 20;
cout << (a==b) << endl;//()让算术表达式做一个优先级比较 输出0 假

//!=
cout << (a!=b) << endl;//()让算术表达式做一个优先级比较 输出1 
//<
cout << (a<b) << endl;//()让算术表达式做一个优先级比较 输出1
//<=
cout << (a<=b) << endl;//()让算术表达式做一个优先级比较 输出1
//>=
cout << (a>=b) << endl;//()让算术表达式做一个优先级比较 输出0
```

### 3.4 逻辑运算符

```c++
//非 !
int a = 10;//在c++中除了0都为真 
cout << !a << endl;//1
cout << !!a << endl;//0
//与  &&
int a = 10;
int b = 10;
cout << (a&&b) << endl; //1
int a = 0;
int b = 10;
cout << (a&&b) <<endl ;//0
int a = 0;
int b = 0;
cout << (a&&b) << endl;//0
//或 ||

```

## 4 程序流程结构

### 4.1选择结构

#### 4.1.1  if 语句

#### 单行if语句

单行语法  if (条件){条件满足执行的语句}

```c++
//分数 600 一本 输出
//输入
int score = 0;
cout << "请输入一个分数："<< endl;
cin >> score;
//打印
cout << "您输入的分数为："<< endl;
//判断 
if(score>600){                 // 注意 if后面不要加; 加了就白写了
    cout <<"恭喜您考上的是一本大学"<<endl;
    
}
```

#### 多行 if语句

多行语法： if(条件){条件满足执行的语句}else{条件不足执行的语句};

```c++
int main(){
//输入考试分数 
    int score = 0;
        cout << "请输入一个考试分数" << endl;
    cin >> score;
    
    //判断
    if (score > 600){
        cout << "恭喜考上了一本大学" << endl;
   }
    else{
        cout << "未考上一本大学" <<endl;
    }
    
    system("pause");
return 0;    
}
```

多条if语句

```c++
//用户输入分数
int score = 0;
cout << "请输入考试分数：" << endl;
cin >> score;
//提示用户输入考试分数
cout << "您输入的分数为：" << score << endl;
//判断
if（score > 600）{
    cout << "恭喜您考上一本大学" << endl;
}
else if(score > 500){
 cout << "恭喜您考上二本大学" << endl;
}
else if(score > 400){
     cout << "恭喜您考上三本大学" << endl;
}
else{
     cout << "未考上本科" << endl;
}
```

##### 嵌套if语句

```c++
//输入
int score = 0;
cout << "输入分数" <<endl;
cin >> score;
cout <<"您输入的分数为：" << endl;
//判断
if( score>600){
 cout << "恭喜您考上一本大学" << endl;
    if (score>650){                       //嵌套if里面放if 
        cout << "恭喜您北大" << endl;
    }
    else if (score>650){
        cout << "恭喜您清华" << endl;
    }
    else (score>650){
        cout << "恭喜您人大" << endl;
    }                                     //嵌套
}
else if(score > 500){
 cout << "恭喜您考上二本大学" << endl;
}
else if(score > 400){
     cout << "恭喜您考上三本大学" << endl;
}
else{
     cout << "未考上本科" << endl;
    
}
```

习题  三只小猪称体重ABC

```c++
#include <iostream>
using namespace std;
int main()
{

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    //输入三只小猪的体重
    cout << "输入A" << endl;
    cin >> num1;
    cout << "输入B" << endl;
    cin >> num2;
    cout << "输入C" << endl;
    cin >> num3;
    cout << "A" << num1 << endl;
    cout << "B" << num2 << endl;
    cout << "C" << num3 << endl;
    //判断
    if (num1 > num2)
    {

        if (num1 > num3)
        {
            cout << "A最重" << endl;
        }
        else
        {
            cout << "C最重" << endl;
        }
    }
    else
    {
        if (num2 > num3)
            cout << "B最重" << endl;
        else
        {
            cout << "C最重" << endl;
        }
    }
}
```

### 4.1.2 三目运算符

语法：表达式1    ?   表达式2    :  表达式3  :

1 真执行2 返回2// 1假执行3 返回3

```c++
#include <iostream>
using namespace std;
int main()
{
//创建三个变量
	int a = 10;
	int b = 20;
	int c = 0;
//将a和b作比较将变量大的赋值给c
	c = (a > b ? a : b :)
    cout << "c = " << c << endl;
 //在c++中三目运算符返回的是变量 可以继续赋值
    a > b ? a : b = 100;//将100赋值给返回的b
    cout << "a = " << a << endl;//10
    cout << "b = " << b << endl;//100
    }

```

### 4.1.3 switch语句

执行多条件分支语句

语法

```c++
switch(表达式){
        case(结果1)：执行语句;break;
        case(结果2)；执行语句;break;
        ...
            default:执行语句;break;
}
```

给电影打分 9-10 经典 7-8 非常好5-6一般 其他烂片

```c++
#include <iostream>
using namespace std;
int main()
{
    cout << "请给电影进行打分" << endl;
    int score = 0;
    cin >> score;
    cout << "电影分数为" << endl;
    //根据用户的打分来提示电影的水平
    switch (score)
    {
    case 10:
        cout << "您认为是经典电影" << endl;
        break; //退出当前分支
    case 9:
        cout << "您认为是经典电影" << endl;
        break; //退出当前分支
    case 8:
        cout << "您认为是电影非常好" << endl;
        break; //退出当前分支
    case 7:
        cout << "您认为是电影非常好" << endl;
        break; //退出当前分支
    case 6:
        cout << "您认为是电影一般" << endl;
        break; //退出当前分支
    case 5:
        cout << "您认为是电影一般" << endl;
        break; //退出当前分支
    default:
        cout << "您认为这是烂片" << endl;
        break; //退出当前分支
    }
}
```

if 和switch区别

switch 缺点 ，判断时候只能是<u>**整型或者字符型**</u> 不可以是一个区间

switch优点，结构清晰 执行效率高



注意

1、switch语句中表达式的类型只能是整型或者字符型

2、不写break那么程序会一直向下执行

总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch<u>不可以判断区间</u> 

### 4.2循环结构

### 4.2.1while循环语句

语法：while（循环条件）{循环语句}

只要循环条件结果为真 就执行循环语句

```c++
#include <iostream>
using namespace std;
int main()
{
    //在屏幕上打印0-9 10个数字
    int num = 0;
    cout << num << endl;
    num++;
    cout << num << endl;

}
```

```c++
#include <iostream>
using namespace std;
int main()
{
    //在屏幕上打印0-9 10个数字
    int num = 0;
    cout << num << endl;
    while (num < 9)//循环的结束语句 防止死循环
    {
        num++;
        cout << num << endl;
    }
}
```

```c++
#include <iostream>
using namespace std;
int main()
{
    //在屏幕上打印0-9 10个数字
    int num = 0;
    while (num < 10)//在写循环的时候要注意不要写死循环 
    {
        cout << num << endl;//先输出0 再++
        num++;
        }
}
```

while案例 猜数字 

```c++
#include <iostream>
using namespace std;
//time 系统时间的头文件包含
#include <ctime>
int main()
{
    //添加随机种子 作用 利用当前系统时间生成随机数 防止每次生成的随机数都一样
    srand((unsigned int)time(NULL));
    //1、系统要生成一个随机数x
    int x = rand() % 100 + 1; //rand() % 100生成0-99的随机数 +1 生成1-100的随机数
    //cout << x << endl; 不输出

    //2、玩家要输人一个猜测数字
    int num = 0;
    cout << "请输入一个数字" << endl;

    while (1)
    {
        cin >> num;//写在while外面将会无限循环 写外面写入数字不变一直是那个数字进入循环只要不是正确的数字就会一直循环 一直循环显示过大或过小 

        //3、猜对了退出游戏
        //猜错了 判断大小并作出提示 再次输入返回第二步
        if (num > x)
        {
            cout << "过大" << endl;
        }
        else if (num < x)
        {
            cout << "过小" << endl;
        }
        else
        {
            cout << "恭喜" << num << endl; //猜对 退出游戏
            break;                         //break 可以利用该关键字来退出当前循环
        }
    }
}
```

### 4.2.2do… while循环语句

语法：do{循环语句}while(循环条件)

与while的区别是会先执行一次循环语句在判断循环条件

```c++
#include <iostream>
using namespace std;

int main()
{
    //在屏幕中输出0-9 十个数字
    int num = 0;
    do
    {
        cout << num << endl;
        num++;
        
    } while (num < 9);
}
```

案例 水仙花数

水仙花数是指一个3位数他的每个位上的数字的三次方之和等于他本身 如1^3+5^3+3^3=153

```c++
//将所有的三位数进行输出（100-999）
//在所有的三位数中找到水仙花数
//获取各位十位百位 用取余运算来获取个位 先除以10再进行取余运算可以获取到十位 两次除以10再进行取余运算可以获取到百位
//判断 个位^3+十位^3+百位^3=本身
```



```c++
#include <iostream>
using namespace std;

int main()
{
    //先打印所有的三位数字
    int num = 100;
    do
    {
        cout << num << endl;
        num++;

    } while (num < 1000);
```

```c++
#include <iostream>
using namespace std;

int main()
{
    //先打印所有的三位数字
    int num = 100;
    do
    {
        int a = 0;         //个位
        int b = 0;         //十位
        int c = 0;         //百位
        a = num % 10;      //获取个位
        b = num / 10 % 10; //获取十位
        c = num / 100;     //获取百位

        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << endl;
        }
        num++;

    } while (num < 1000);
    system("pause");
    return 0;
    //从所有的数字中找到水仙花数
}
```

4.2.3 for循环语句

语法 for (起始表达式 ；条件表达式 ；末尾循环体){循环语句；}

```c++
int main(){
for(int i = 0; i < 10;i++){//起始表达式不参与循环 变量初始赋值 创建 声明\不能无限循环的约束条件 \循环结束后需要的表达式的运行 末尾循环体结束
    cout << i <<endl;
}
    system("pause");
    return 0;
}
```

```c++
#include <iostream>
using namespace std;

int main()
{
    //for循环
    //从数字 0打印到9
    for (int num = 0; num < 10; num++)
    {
        cout << num << endl;//int执行一次、num<10之后执行cout再执行++ 再执行num<10 再cout ......
    }
}
```

案例 敲桌子

```c++
#include <iostream>
using namespace std;

int main()
{
    for (int num = 0; num < 100; num++)
    {
        if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
            cout << "敲桌子" << endl;
        else
            cout << num << endl;
    }
}
```

### 4.2.2 嵌套循环 for

```c++
#include <iostream>
using namespace std;

int main()
{
    //利用嵌套循环实现星图
    //打印一行星图
    //外层执行一次 内层执行一周
    for (int j = 0; j < 10; j++)
    {

        for (int i = 0; i < 10; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
//* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
```

案例 乘法口诀表

```c++
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            int z = i * j;
            cout << i;
            cout << " * ";
            cout << j;
            cout << "=";
            cout << z ;
        }
        cout << endl;
    }
} //自写
//1 * 1=11 * 2=21 * 3=31 * 4=41 * 5=51 * 6=61 * 7=71 * 8=81 * 9=9
//2 * 1=22 * 2=42 * 3=62 * 4=82 * 5=102 * 6=122 * 7=142 * 8=162 * 9=18
//3 * 1=33 * 2=63 * 3=93 * 4=123 * 5=153 * 6=183 * 7=213 * 8=243 * 9=27
//4 * 1=44 * 2=84 * 3=124 * 4=164 * 5=204 * 6=244 * 7=284 * 8=324 * 9=36
//5 * 1=55 * 2=105 * 3=155 * 4=205 * 5=255 * 6=305 * 7=355 * 8=405 * 9=45
//6 * 1=66 * 2=126 * 3=186 * 4=246 * 5=306 * 6=366 * 7=426 * 8=486 * 9=54
//7 * 1=77 * 2=147 * 3=217 * 4=287 * 5=357 * 6=427 * 7=497 * 8=567 * 9=63
//8 * 1=88 * 2=168 * 3=248 * 4=328 * 5=408 * 6=488 * 7=568 * 8=648 * 9=72
//9 * 1=99 * 2=189 * 3=279 * 4=369 * 5=459 * 6=549 * 7=639 * 8=729 * 9=81
```

```c++
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)// 行《=列 
            cout << i << " * " << j << " = " << j * i<< "  ";//输入一个完整的式子
        cout << endl;每输入完一行就换行输入下一行
        ;
    }
}
//1 * 1 = 1
//2 * 1 = 2  2 * 2 = 4
//3 * 1 = 3  3 * 2 = 6  3 * 3 = 9
//4 * 1 = 4  4 * 2 = 8  4 * 3 = 12  4 * 4 = 16
//5 * 1 = 5  5 * 2 = 10  5 * 3 = 15  5 * 4 = 20  5 * 5 = 25
//6 * 1 = 6  6 * 2 = 12  6 * 3 = 18  6 * 4 = 24  6 * 5 = 30  6 * 6 = 36
//7 * 1 = 7  7 * 2 = 14  7 * 3 = 21  7 * 4 = 28  7 * 5 = 35  7 * 6 = 42  7 * 7 = 49
//8 * 1 = 8  8 * 2 = 16  8 * 3 = 24  8 * 4 = 32  8 * 5 = 40  8 * 6 = 48  8 * 7 = 56  8 * 8 = 64
//9 * 1 = 9  9 * 2 = 18  9 * 3 = 27  9 * 4 = 36  9 * 5 = 45  9 * 6 = 54  9 * 7 = 63  9 * 8 = 72  9 * 9 = 81

```

### 4.3跳转语句

#### 4.3.1 break语句

**作用于跳出选择结构或者循环结构**

**<u>使用时机</u>**

出现在switch条件语句中 作用是终止case并跳出switch

出现在循环语句中作用是跳出当前循环语句

出现在嵌套循环中，跳出最近的内层循环语句

示例 

```c++
#include <iostream>
using namespace std;
int main()
{

    //switch语句
    cout << "请选择难度" << endl;
    cout << "难" << endl;
    cout << "中" << endl;
    cout << "易" << endl;
    int num = 0;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "您选择了难" << endl;
        break; //输出以后就跳出循环 不在输出后面的两个
    case 2:
        cout << "您选择了中" << endl;
        break;
    case 3:
        cout << "您选择了易" << endl;
        break;
    }
}

```

```c++
#include <iostream>
using namespace std;
int main()
{
    

    //循环语句
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {          //如果i=5 退出循环
            break; //退出循环
        }
        cout << i << endl;
    }
}

```

```c++
#include <iostream>
using namespace std;
int main()
{

    //嵌套语句
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)//内层循环直到5 就跳出最近的循环
            {
                break;
            }
            cout << "    " << i << "    " << j;
        }
        cout << endl;
    }
}

```

#### 4.3.2 continue 语句

```c++
#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <= 100; i++)
    {
        //如果是奇数输出，偶数不输出
        if (i % 2 == 0)
        {
            continue; //可以筛选条件 偶数执行该语句 不往下执行 执行下一次循环
            //break 会退出循环 continue不会
        }
        cout << i << endl; //奇数执行该语句
    }
}

```





4.3.3 goto语句

可以无条件跳转

语法 goto 标记

```c++
#include <iostream>
using namespace std;
int main()
{
    cout << " 1 " << endl;
    cout << " 2 " << endl;
    goto FLAG;
    cout << " 3 " << endl;
    cout << " 4 " << endl;
FLAG:
    cout << " 5 " << endl;
}
//125
```

## 5数组

### 5.1 一维数组

#### 5.1.1 一维数组的定义方式

数据类型 数组名[数组长度 ]；

数据类型 数组名[数组长度] = {值1， 值2 …};

数据类型 数组名[ ] = {值1，值2 …}

数组特点：放在一块连续的存储空间内

```c++
#include <iostream>
using namespace std;
int main()
{
    //数据类型 数组名[数组长度 ]
    int arr[5];
    // 给数组里的元素进行赋值
    //数组元素下标是从0开始索引的
    arr[0] = 10;
    arr[1] = 22;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 55;
    //访问元素
    cout << arr[0] << endl;
    //访问所有元素
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
}
```

```c++
#include <iostream>
using namespace std;
int main()
{
  
    //数据类型 数组名[数组长度] = {值1， 值2 …};
    //如果 初始化数据时 没有全部填写会用0来填补
    int arr[3] = {10, 20, 30};
    cout << arr[0] << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl; // 10 20 30 0 0 
}
```

```c++
#include <iostream>
using namespace std;
int main()
{

    //
    int arr[] = {10, 20, 30, 40, 50, 60};
    //定义数组的时候必须有初始元素
    cout << arr[5] << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
}
```

总结1： 数组名的命名规范 不要与变量重名

总结2：数组中的下标是从0开始的索引的

#### 5.1.2一维数组 数组名

一维数组数组名的用途：

1 可以统计整个数组再内存中的**长度**  sizeof(arr)

2 可以获取数组在内存中的**首地址 **  

```c++
#include <iostream>
using namespace std;

int main()
{
    //数组名用途
    //1、整个数组内存大小
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    //整型占4个内存空间
    cout << "整个数组所占的内存空间 ：" << sizeof(arr) << endl;
    cout << "每个元素所占的内存空间：" << sizeof(arr[0]) << endl;
    cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
    //总内存空间/每个元素所占内存空间 = 元素个数

    //2、通过数组名查首地址
    cout << "数组的首地址为 ：" << (int)arr << endl; //一般是16进制显示 可以换
    cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;
     cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
    system("pause");

    return 0;
}
```

数组名是一个常量 不可以进行赋值操作 

##### 案例 五只小猪称体重

本质 找到数组的最大值

```c++
#include <iostream>
using namespace std;
int main()
{
    // 创建五只小猪体重的数组
    //从数组中扎到最大值
    //打印最大值
    //
    int arr[5] = {300, 350, 200, 400, 250};
    // 找最大值 认定一个最大值max 依次访问每个元素如果该元素大于max则更新max
    int max = 0;
    //如果我访问的数组中的元素比我认定的最大值还要大 那么将这个值赋给max 即更新最大值
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        //cout << arr[i] << endl;
    }
    cout << "最大值为 ：" << max << endl;

    return 0;
}
```

案例 数组元素逆置

```c++
#include <iostream>
using namespace std;

int main()
{
    //创建一个数组

    
    int arr[5] = {1, 3, 2, 5, 4};
    cout << "逆置前：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    //实现逆置
    //记录起始、结束下标的位置
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    while (start < end) //循环执行 至 起始位置>=结束位置
    {

        //起始、结束 下标互换
        int temp = arr[end]; // 创建一个临时的位置存放
        arr[end] = arr[start];
        arr[start] = temp;

        //起始位置 ++ 结束位置 --
        start++;
        end--;
    }
    //输出
    for (int j = 0; j < 5; j++)
        cout << "逆置后：" << arr[j] << endl;
}
```

#### 5.1.3 冒泡排序

比较相邻的元素，第一个大于第二个就交换他们。

循环一圈下来，可以找到最大值。

重复 每次比较次数 -1 ，直到不需要比较。

```c++
#include <iostream>
using namespace std;

int main()
{
    //利用冒泡排序实现升序序列
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    cout << "排序前的结果" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    //开始冒泡排序
    //总共排序轮数
    for (int i = 0; i < 9 - 1; i++) //总共排序轮数 元素个数 - 1
    {
        //内存循环对比 次数 = 元素个数 - 当前轮数 -1
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "排序后的结果 ：" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
}
```

### 5.2 二维数组

#### 5.2.1二维数组定义方式

数据类型 数组名 [行数] [列数];

```c++
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }
    }
}
```

数据类型 数组名 [行数] [列数] = {  {数据1，数据2}，{数据3 ，数据4} } ；

```c++
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}
   	 	};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
```

数据类型 数组名 [行数] [列数]  =  { 数据1 ，数据2， 数据3 ，数据4 }；

```c++
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
```

数据类型 数组名 [        ] [列数] = {数据1 ，数据2，数据3，数据4}；

```c++
#include <iostream>
using namespace std;
int main()
{
    int arr[][3] = {9, 0, 2, 3, 7, 9, 1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
```

#### 5.2.3二维数组名称

```c++
#include <iostream>
using namespace std;
int main()
{
    //可以查看所占用内存空间的大小
    int arr[][3] = {3, 6, 7, 8, 9, 2};
    cout << "该二维数组所占内存空间为：" << sizeof(arr) << endl;
    cout << "二维数组第一行所占的内存空间为：" << sizeof(arr[0]) << endl;        //行
    cout << "二维数组第一个元素所占的内存空间为：" << sizeof(arr[0][0]) << endl; //列

    
    cout << "二维数组行数为： " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数为： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 可以查看二维数组的首地址
    cout << "二维数组的首地址为 ：" << arr << endl;
    cout << "二维数组中第一行首地址为 ： " << arr[0] << endl;
    cout << "二位数组中第二行首地址为 ： " << arr[1] << endl;
    cout << "二维数组中第一个元素的首地址为 ： " << &arr[0][0] << endl; //是一个数 元素  要取地址符
}
```

#### 5.2.4二维数组案例 —— 考试成绩统计

```c++
#include <iostream>
using namespace std;
int main()
{
    int scores[][3] = {100, 100, 100, 90, 50, 100, 60, 70, 80};
    int sum = 0;
    string name[3] = {"张三", "李四", "王五"};//定义三个字符串
    // 统计每个人的综合分数
    for (int i = 0; i < 3; i ++){
        int sum = 0;
        for (int j = 0; j < 3;j++){
            // cout << scores[i][j] <<"  ";
            sum += scores[i][j];
        }
        // cout << "第 " << i + 1 << " 个人的总分为 ； " << sum << endl;
        cout  << name[i] << " 的总分为 ； " << sum << endl;//在第一层 循环里面输出 i
    }
        system("pause");
    return 0;

}



//张三 的总分为 ； 300
//李四 的总分为 ； 240
//王五 的总分为 ； 210
```

## 6 函数

将一段经常使用的代码封装起来，减少重复代码。将一个大程序等成若干程序快每个模块实现特定的功能。

### 6.1函数的定义 步骤  

1、返回值类型 一个函数可以返回一个值 在函数定义中

2、函数名 给函数起个名

3、参数列表  使用该函数时 传入的数据

4、函数体语句花括号内 函数内需要执行的代码

5、return 表达式  和返回值挂钩 函数执行完后返回相应的数据

### 6.2语法 

```
返回值类型 函数值 (参数列表)
{
    函数体语句
     
     return 表达式
}
```

```c++
#include <iostream>
using namespace std;
    //加法
    //返回值类型 整型  int
    //函数名 add
    //参数列表  (int num1 int num2)
    //函数体语句  int sum = num1 + num2;
    //return 表达式  return sum;
int add (int num1,int num2) //函数定义的时候 num1 num2 都没有真实的数据，形式参数  形参 
        {
            int sum = num1 + num2;
            return sum;
        }
int main()
{
    //main函数中调用add函数
    int a = 10;
    int b = 20;
    //函数调用语法： 函数名称（参数）
    //add(a, b);
    //a, b 称为实际参数 简称 实参 
    //当调用函数时 实参的值会传递
    int c = add(a, b);
    cout << " c = " << c << endl;
    
    system("pause");
    return 0;

}
```

### 6.3值传递

```c++
#include <iostream>
using namespace std;
   //值传递
   //定义函数 实现两个个数字进行交换函数
   //如果函数不需要返回值 声明的时候可以写一个 void
void swap (int num1,int num2){
       cout << "交换前 " << endl;
       cout <<"num1 = " << num1 << endl;
       cout <<"num2 = " << num2 << endl;
       int temp = num1;
       num1 = num2;
       num2 = temp;
       cout << "交换后 " << endl;
       cout <<"num1 = " << num1 << endl;
       cout <<"num2 = " << num2 << endl;

       return;//返回值不需要的时候可以不写 或者只写一个return
   }
int main()
{

    int a = 10;
    int b = 20;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    //当我们做值传递的时候  函数的形参发生改变不会影响实参 
    swap(a, b);
     cout << " b = " << b << endl;
    cout << " a = " << a << endl;
    //虽然交换前后num1 num2 发生改变但是 a,b 不发生改变
       
    system("pause");
    return 0;

}
```

### 6.4 函数的常见样式

1、无参无返

2、有参无返

3、无参有返

4、有参有返

```c++
#include <iostream>
using namespace std;
// 无参无返
void test01()
{
    cout << " this is test01" << endl;
}
//有参无返
void test02(int a)
{
    cout << " this is test02 a = " << a <<endl;
}
//无参有返
int test03()
{
    cout << " this is test03" << endl;
    return 1000;
}
//有参有返
int test04(int b)
{
    cout << " this is test04 b = " << b << endl;
    return b;
}
int main()
{
        //无参无返调用
        test01();
        //有参无返调用
        test02(100);
        //无参有返调用
        int num1 = test03(); //返回值1000
        cout << "num1 = " << num1 << endl;
        //有参有返调用
        int num2 = test04(10000);
        cout<< "num2 = " << num2 << endl;

        system("pause");
        return 0;
}
```

### 6.5 函数的声明

告诉编译器函数名称以及如何调用函数 函数的实际主题可以单独定义

函数的生命可以多次但函数的定义只能有一次

```c++
#include <iostream>
using namespace std;
//函数的声明
//比较函数，实现两个阵发性数字进行比较返回较大的值

//定义
int max(int a ,int b )
{
    return a > b ? a : b;
}
int main()
{
    int a = 10;
    int b = 20;

    cout << max(a, b) << endl;

    system("pause");
    return 0;
}
```

```c++
#include <iostream>
using namespace std;
//函数的声明
//比较函数，实现两个阵发性数字进行比较返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明
int max(int a, int b);//无具体的代码实现 只有 返回值类型 函数名和形参列表

//！！！！！ 函数的声明多次 但函数的定义只有一次 声明的后面都可以放定义
//函数在main函数之前可以不用声明 但是在main之后必须要声明

int main()
{
    int a = 10;
    int b = 20;

    cout << max(a, b) << endl;

    system("pause");
    return 0;
}
//定义
int max(int a ,int b )
{
    return a > b ? a : b;
}
```

6.6 函数的分文件编写

让代码的结构更加清晰

函数分文件编写步骤

1、创建后缀名为 .h 的头文件

2、创建后缀名为 .cpp的源文件

3、在头文件中写函数的声明

4、在源文件中写函数的定义

















