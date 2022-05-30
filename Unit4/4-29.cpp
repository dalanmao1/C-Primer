#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int x[10];
    int *p = x;

    cout << sizeof(x) << ' ' << ends; //注意：得到是整个数组的长度
    cout << sizeof(*x) << endl;       // sizeof（int）
    cout << (sizeof(x) / sizeof(*x)) << endl;
    cout << sizeof(p) << ' ' << ends; //指针所占用的空间长度,float指针也是4
    cout << sizeof(*p) << endl;
    cout << (sizeof(p) / sizeof(*p)) << endl;
    return 0;
}
