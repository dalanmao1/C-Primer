#include <iostream>
#include "Screen.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Screen data1;
    Screen data2(1, 2, 's');
    Screen data3(1, 2, 3, "sbn", 8);
    data3.some_member(); // mutable起作用了，可以改变private的值，及时它在const成员变量里面
    return 0;
}
