#include <iostream>
#include <fstream>
#include "Sales_data.h" //����ͬһ���ļ����²ſ���ʹ��
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
        cerr << "û������" << endl;
    return 0;
}
