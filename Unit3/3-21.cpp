#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int num;
  vector<int> vec{1, 2};
  vector<int>::iterator it = vec.begin();
  //   while (cin >> num) {
  //     vec.push_back(num);
  //   }
  //   for (it; it <=vec.end(); it++) {
  cout << *(vec.end() - 1) << endl;
  //   }

  return 0;
}
