#include <iostream>
using namespace std;
void f()
{
    cout << "该函数没有参数" << endl;
}

void f(int)
{
    cout << "该函数有一个int参数" << endl;
}
void f(int, int)
{
    cout << "该函数有2个int参数" << endl;
}
void f(double, double)
{
    cout << "该函数有2个double参数" << endl;
}
int main(int argc, char const *argv[])
{

    f(1);
    f(1, 2);
    f(1.2, 1.3);
    f(1, 1.2); //会报错，f(double, double)和f(int, int)冲突，注释掉其中就不会报错了
    return 0;
}
