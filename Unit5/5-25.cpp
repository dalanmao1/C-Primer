#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival1, ival2;
    cout << "请输入两个数:" << endl;
    while (cin >> ival1 >> ival2)
    {
        try
        {
            if (ival2 == 0)
                throw runtime_error("除数不能为0");
            cout << "结果为：" << ival1 / ival2 << endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n'; //什么语句？
        }
    }
    return 0;
}
