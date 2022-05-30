#include <iostream>
using namespace std;

class NoDefault
{
public:
    NoDefault() = default; //默认构造函数，没有的话，容器vector<NoDefault>会报错的
    NoDefault(int i)
    {
        val = i;
    };
    int val;
};
class C
{
public:
    NoDefault nd;
    C(int i = 0) : nd(i){}; //这样都行？nd还不是一个对象呢
};
