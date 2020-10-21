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
//或

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

#####多条if语句

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
int weight = 0;
cout << "请输入体重：" << endl;
cin >> weight;
cout << "你输入的体重是：" << endl;

```

```c++
//创建三只小猪的体重
07980798007980798
```

4.1.2 三目运算符 

语法：表达式1    ?   表达式2    :  表达式3



















































