#include <iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Sales_data data1("c++ primer", 10, 100, 100);
    Sales_data data2();
    Sales_data data3("c++ primer");
    Sales_data data4(cin);
    return 0;
}
