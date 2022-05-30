#include <iostream>
#include <vector>

using namespace std;
int fuc1(int a, int b)
{
    return a + b;
}
int fuc2(int a, int b)
{
    return a - b;
}
int fuc3(int a, int b)
{
    return a * b;
}
int fuc4(int a, int b)
{
    return a / b;
}
int main(int argc, char const *argv[])
{
    decltype(fuc1) *p1 = fuc1, *p2 = fuc2, *p3 = fuc3, *p4 = fuc4;
    vector<decltype(fuc1) *> vec{p1, p2, p3, p4};
    cout << (*p1)(1, 2) << endl; //(*p1)(1, 2)和*p1(1, 2)等价
    return 0;
}
