#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int arry[10];
  for (int i = 0; i < 10; i++) {
    arry[i] = i;
  }
  for (auto v : arry) {
    cout << v << ' ' << ends;
  }
  cout << endl;
  auto *p = begin(arry);  // begin是作用于数组的，容器用.调用
  for (; p != end(arry); p++) {
    *p = 0;
  }
  for (auto v : arry) {
    cout << v << ' ' << ends;
  }
  return 0;
}
