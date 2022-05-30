#include <iostream>

using namespace std;

string str[4] = {"1", "2", "3"};
string (&func())[10];

//这里arr是一个数组别名，表示的类型是含有10个string型的数组
typedef string arr[10];
arr &func();

//尾置返回
auto func() -> string (&)[10];

// decltype(arr)返回的是与arr
string arr[10];
decltype(arr) &func()

    int main(int argc, char const *argv[])
{
    float odd;
    cout << *reString() << endl;
    return 0;
}
