#include <iostream>
#include <vector>
#include "NoDefault.h"
using namespace std;

int main(int argc, char const *argv[])
{
    vector<NoDefault> Nvec(10); //���ûĬ�Ϲ��캯��NoDefault() = default;���Ͳ��ܽ���Ĭ�ϳ�ʼ��������ͻᱨ��
    return 0;
}
