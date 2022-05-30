#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char cval;
    cval = 'a' + 3; //'a'先转换为int类型，加3后结果变成char型

    int ival1, ival2;
    float fval;
    fval = ival1 - ival2 * 1.0; // ival2转换为double型，与1.0相乘，ival1转换为double型，相加结果转换为float型

    int ival;
    double dval;
    cval = ival + fval + dval; // ival装换为float型和fval相加，结果装换为double型和dval相加，最后结果转换为char型
    return 0;
}
