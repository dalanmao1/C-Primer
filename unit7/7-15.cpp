#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Person data1;
    Person data2("sbn");
    Person data3("sb", "铜锣湾");
    Person data4(cin);

    cout << "构造函数创建情况：" << endl;
    print(cout, data1);
    print(cout, data2);
    print(cout, data3);
    print(cout, data4);

    return 0;
}
