#include <iostream>
#include <fstream>
#include "Sales_data.h" //放在同一个文件夹下才可以使用
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cerr << "请给出文件名" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if (!in)
    {
        cerr << "文件无法打开" << endl;
        return -1;
    }

    Sales_data total;
    if (read(in, total))
    {
        Sales_data trans;
        while (read(in, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "没有数据" << endl;
        return -1;
    }
    return 0;
}
