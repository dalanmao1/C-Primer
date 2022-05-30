#include <iostream>

using namespace std;

int swapPointer1(int *p, int *q)
{
     int *temp;
     temp = p;
     p = q;
     q = temp;
}
int swapPointer2(int *&p, int *&q)
{
     int *temp;
     temp = p;
     p = q;
     q = temp;
}
int main(int argc, char const *argv[])
{
     int a = 4, b = 7;
     int *p = &a, *q = &b;
     cout << "交换前：" << endl
          << "p=" << p << ",q=" << q << endl;
     cout << "*p=" << *p << ",*q=" << *q << endl;
     swapPointer1(p, q);
     cout << "交换后：" << endl
          << "p=" << p << ",q=" << q << endl;
     cout << "*p=" << *p << ",*q=" << *q << endl;

     a = 4, b = 7;
     p = &a, q = &b;
     cout << "交换前：" << endl
          << "p=" << p << ",q=" << q << endl;
     cout << "*p=" << *p << ",*q=" << *q << endl;
     swapPointer2(p, q); //传入指针的引用，所以指针变化
     cout << "交换后：" << endl
          << "p=" << p << ",q=" << q << endl;
     cout << "*p=" << *p << ",*q=" << *q << endl;

     return 0;
}
