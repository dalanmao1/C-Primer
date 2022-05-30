#include <iostream>
using namespace std;
// int ival = 5;      //这个对象函数开始前就存在了，可以返回引用
int &reQuote(int &ival) //返回引用和返回值不同，不需要新建一个未命名的临时对象
{
    // int ival = 4;//放在里面会报错
    return ival;
}
int main(int argc, char const *argv[])
{
    int ival = 5;
    cout << reQuote(ival) << endl;
    return 0;
}
