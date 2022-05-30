#include <iostream>
#include "Sales_data.h"
using namespace std;
Sales_data &read(Sales_data &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
