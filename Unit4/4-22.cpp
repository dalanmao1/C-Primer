#include <iostream>
#include <vector>
using namespace std;
vector<int> vInt;

int main(int argc, char const *argv[])
{
    float grade;
    cout << "请输入您的成绩：" << ' ' << ends;

    while (cin >> grade && grade <= 100 && grade >= 0)
    {
        //注意优先级，建议用括号cout<<(...)<<endl
        cout << ((grade < 60) ? "fail" : ((grade < 75) ? "low pass" : ((grade < 90) ? "pass" : "high pass"))) << endl;
    }
    cout << "您输入的成绩有误！" << ends;
    return 0;
}
