#include <iostream>
#include "Screen.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    myScreen.display(cout);
    /*可以卡到myScreen的cursor值变了，因为它调用了move，move返回一个副本（没引用）
    导致的结果就是后续的操作set('#')和myScreen就没关系了，所以contents没改变
    XXXXXXXXXXXXXXXXXXXX#XXXX 20
    XXXXXXXXXXXXXXXXXXXXXXXXX 20*/
    return 0;
}
