#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    char p = 0x71;
    cout << (int)p << endl;
    cout << (~p << 6) << endl; //-7296，移位符号对象是整数类型，所以需要把char变成int型
    return 0;
}
