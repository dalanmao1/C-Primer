#include <iostream>
#include <stdexcept>
using namespace std;

istream &f(istream &in)
{
    int v;
    while (in >> v, !in.bad())
    {
        if (in.bad())
            throw runtime_error("IO流错误");
        if (in.fail())
        {
            cerr << "数据错误，请重试" << endl;
            in.clear();
            in.ignore(100, '\n'); // 100是最大忽略数，遇到回车停止
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main(int argc, char const *argv[])
{
    cout << "请输入一些整数, 按ctrl+z结束" << endl;
    f(cin);
    return 0;
}
