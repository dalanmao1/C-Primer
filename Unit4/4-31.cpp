#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++) //需要将i的值先存储下来再++，是一种浪费
        cout << i << ' ' << ends;
    for (int i = 1; i < 10; ++i) //无特殊情况，用这个
        cout << i << ' ' << ends;
    return 0;
}
