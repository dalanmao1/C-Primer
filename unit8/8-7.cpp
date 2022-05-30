#include <iostream>
#include <fstream>
#include "Sales_data.h" //放在同一个文件夹下才可以使用
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in(argv[1]);
    ofstream out;
    out.open("test.txt", ifstream::out);
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
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    }
    else
        cerr << "没有数据" << endl;
    return 0;
}
