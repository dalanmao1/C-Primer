#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in("data"); //()�������ļ����Ͳ���Ҫ˫������
    if (!in)
    {
        cout << "�޷����ļ�" << endl;
        return -1;
    }
    string line;
    vector<string> words;
    while (getline(in, line))
    {
        words.push_back(line);
    }
    in.close();
    auto it = words.begin();
    while (it != words.end())
    {
        cout << *it << endl;
        ++it;
    }

    return 0;
}
