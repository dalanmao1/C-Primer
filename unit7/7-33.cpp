#include <iostream>
#include "Screen.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Screen myScreen(10, 10, 'x');
    cout << myScreen.size();
    return 0;
}
