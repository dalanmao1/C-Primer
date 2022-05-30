#include <iostream>
#include <vector>
using namespace std;
int arrycomp(int *arry1, int *arry2, size_t i);
int vectorcmp(vector<int> vec1, vector<int> vec2);

int main(int argc, char const *argv[]) {
  int arry1[10] = {1, 2, 3, 1};
  int arry2[10] = {1, 2, 3};
  vector<int> vec1{1, 2, 3};
  vector<int> vec2{2, 3, 4};
  // arrycomp(arry1, arry2, 10);
  vectorcmp(vec1, vec2);
}
int arrycomp(int arry1[], int arry2[],
             size_t i) {  //传入一个指针，数组的属性不传入，比如数组大小
  for (auto p = arry1, q = arry2; p != arry1 + i && q != arry2 + i; p++, q++) {
    if (*p != *q) {
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
  return 0;
}

int vectorcmp(vector<int> vec1, vector<int> vec2) {
  for (auto p = vec1.begin(), q = vec2.begin();
       p != vec1.end() && q != vec2.end(); p++, q++) {
    if (*p != *q) {
      cout << "no" << endl;
      break;
    }
  }
  cout << "yes" << endl;
}