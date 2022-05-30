//#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void ss(int sh);

int main(int argc, const char *argv[])
{
    int sh1;

    cout << "请输入要求多少以内的素数";
    cin >> sh1;
    cout << sh1 << "以内的素数是" << endl;
    ss(sh1);
    // system("pause");
    return 0;
}

void ss(int sh)
{
    int i, j, js;
    js = 0;
    char b;
    b = 't';
    for (i = 2; i <= sh; i++)
    {
        b = 't';
        if (i == 2)
        {
            js += 1;
            cout << i;
            continue;
        }
        for (j = 2; j <= sh - 1; j++)
        {
            if (i % j == 0)
            {
                b = 'f';
                break;
            }
        }
        if (b == 't')
        {
            js += 1;
            if (js % 6 == 0)
                cout << endl;
            cout << setw(10) << i;
        }
    }
    // system("pause");
}