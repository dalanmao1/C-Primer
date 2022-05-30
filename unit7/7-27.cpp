#include <iostream>
#include "Screen.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout); // move返回*this，相当于myScreen.move(4, 0)是一个Screen对象，后面同样
    myScreen.display(cout);
    return 0;
}
