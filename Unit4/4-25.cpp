#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    char p = 0x71;
    cout << (int)p << endl;
    cout << (~p << 6) << endl; //-7296����λ���Ŷ������������ͣ�������Ҫ��char���int��
    return 0;
}
