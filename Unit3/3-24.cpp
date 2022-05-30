#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    vector<int> vec;
    while (cin >> num)
    {
        vec.push_back(num);
    }
    auto beg = vec.begin();
    auto end = vec.end();

    for (auto it = beg; it != end; it++) //输出首尾两个数之和
    {
        cout << (*it + *(beg + (end - it) - 1)) << ' ' << ends; // beg + end - it 这样不行，end - it变成一个整型
    }
    // num = 2;
    // auto end = vec.end();
    // cout << *(end - num) << endl;//指针是可以和整形相加减的，相当于地址跳变
    return 0;
}
