#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
    }
    else
    {
        if (s1 > s2)
        {
            cout << s1;
        }
        else
        {
            cout << s2;
        }
    }

    return 0;
}
