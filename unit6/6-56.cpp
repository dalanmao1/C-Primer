#include <iostream>
#include <vector>
using namespace std;
int fun(int a, int b)
{
    return a + b;
}
int compute(int a, int b, int (*p)(int, int))
{
    return (*p)(a, b);
}
int main(int argc, char const *argv[])
{
    decltype(fun) *p = &fun;
    cout << compute(1, 2, p) << endl;
    return 0;
}
