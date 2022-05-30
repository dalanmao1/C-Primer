#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[]) {
  string str1, str2;
  cin >> str1 >> str2;
  if (str1 == str2) {
    cout << "yes" << endl;
  } else if (str1 < str2)
    cout << "xiaoyu" << endl;
  else
    cout << "dayu" << endl;
  return 0;
}
