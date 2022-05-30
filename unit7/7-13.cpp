#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Sales_data total(cin);
    if (cin)
    {
        Sales_data trans(cin);
        while (cin)
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total);
                total = trans; //对象和对象之间可以赋值，除了流对象
            }
        }
        print(cout, total);
    }
    else
    {
        cerr << "No data!" << endl;
    }
    return 0;
}
