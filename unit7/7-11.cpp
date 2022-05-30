#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Sales_data data1;
    Sales_data data2("491636840");
    Sales_data data3("491636840", 100, 128, 109);
    Sales_data data4(cin);
    cout << "书籍的销售情况：" << endl;
    print(cout, data1);
    print(cout, data2);
    print(cout, data3);
    print(cout, data4);

    return 0;
}
