#include <iostream>
#include <fstream>
#include "Sales_data.h" //����ͬһ���ļ����²ſ���ʹ��
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cerr << "������ļ���" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if (!in)
    {
        cerr << "�ļ��޷���" << endl;
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
        cerr << "û������" << endl;
        return -1;
    }
    return 0;
}
