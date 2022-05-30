#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "请输入交易记录：" << endl;
    Sales_data total;
    if (cin >> total.bookNo)
    {
        Sales_data trans;
        while (cin >> trans.bookNo)
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                cout << total.bookNo << endl;
                total = trans;
            }
        }
        cout << total.bookNo << endl;
    }
    else
    {
        cerr << "No data!" << endl;
        return -1;
    }
    return 0;
}
