#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned scores[11]; //这边一定要初始化，因为是在函数内部，不会默认初始化的；unsigned scores[11]={};
    unsigned grade;      //不然的话会出现未定义的值
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade / 10];
        }
    }
    for (auto i = 0; i < 11; i++)
    {
        cout << scores[i] << ' ' << ends;
    }
}
