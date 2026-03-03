- [week01](#week01)
  - [编译链接](#编译链接)
  - [预处理和宏](#预处理和宏)
  - [命令行参数](#命令行参数)
- [week09](#week09)
  - [构造函数construcor](#构造函数construcor)
  - [析构函数destructors](#析构函数destructors)

# week01
## 编译链接
多文件管理
分步编译    g++ -c x.cpp   ->    x.o
链接   main.o   mul.o      ->    main.exe
g++ main.o mul.o -o mul 

## 预处理和宏
宏替换是预处理的一部分。
#include宏 把文件内容插到源文件里
#if 文件过滤
#define 文本替换
他们都可以看做文本替换

## 命令行参数

# week09
C语言中结构体是一种数据成员组成的类型(type)，需要一些函数或语句来操作 struct 类型对象的数据成员。
在内存上是连续的
而且有内存对齐原则

struct有类似数据与逻辑分离的问题，状态不可控的问题

safer solution:class  在其中加入函数
类似于汽车不是一堆零件，class的函数相当于把零件和行为绑定在一起

private封装数据类型可以使数据类型制备内置函数使用

inline function内联函数
inline 类型 类::函数名(参数){}

## 构造函数construcor
对象诞生的瞬间，必须立刻执行一段代码初始化

与struct不同，class会调用构造函数

struct只分配内存

class分配内存并且调用函数

如果没写默认函数，当一个对象被创建了之后，就会有一个默认的构造函数，并且是空的

**构造函数的特点**：
构造函数名与类名相同
没有返回值

也可以用初始化列表的方式初始化构造函数
尤其是对于一些用const定义的变量来说

```
class stu{
    private:
        const int studentid;
    public:
        stu(int id):studentid(id){

        }
}
```

## 析构函数destructors
对象被销毁时用析构函数
析构函数名：~类名
没有返回值和参数

