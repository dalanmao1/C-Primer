#include <iostream>
#include <vector>
#include "NoDefault.h"
using namespace std;

int main(int argc, char const *argv[])
{
    vector<NoDefault> Nvec(10); //如果没默认构造函数NoDefault() = default;，就不能进行默认初始化，这个就会报错。
    return 0;
}
