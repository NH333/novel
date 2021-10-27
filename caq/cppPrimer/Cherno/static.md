# 类和结构体外的static
## 全局变量
```
1_Static.cpp

int s_Variable = 5;
```

```
2_Main.cpp

int s_Variable;

int main()
{
    std::cout<<s_Variable<<std::endl;
    std::cin.get();
}
```
以上代码会发生链接错误LNK2005，由于s_Variable在另一个翻译单元中被定义，所以我们不能拥有两个同名的全局变量

## extern
```
1_Static.cpp

int s_Variable = 5;
```

```
2_Main.cpp

extern int s_Variable; //修改

int main()
{
    std::cout<<s_Variable<<std::endl;
    std::cin.get();
}
```
解决以上问题我们可以利用extern，它会在外部翻译单元中寻找s_Variable


## static
```
1_Static.cpp

static int s_Variable = 5; //static
```

```
2_Main.cpp

extern int s_Variable; //extern

int main()
{
    std::cout<<s_Variable<<std::endl;
    std::cin.get();
}
```
加上static类似类中的私有成员，表示其他所有的翻译单元都不能看到这个s_Variable变量，所以以上代码会出现未解析的外部符号错误LNK1120，因为在任何地方都找不到名称是s_Variable的整型变量，因为加上static，相当于我们把变量标记为私有的了。



# 类和结构体中的static
1. 静态方法不能访问非静态变量，原因是静态方法没有类实例，非静态方法会默认获得一个类实例作为参数
2. 类静态成员变量：类内声明，类外定义

```
用类静态成员实现单例模式

class Singleton
{
public:
    static Singleton& Get()
    {
        static Singleton instance;
        return instance;
    }

void Hello(){}
};
```
