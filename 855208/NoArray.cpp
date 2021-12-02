#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int classMemberCount = 1;
  cout << "請輸入班級人數: ";
  cin >> classMemberCount;

  int total = 0;
  int max = -1, min = 101;
  int maxNumber = 0, minNumber = 0;
  
  for (int i = 0; i < classMemberCount; i++) {
    int grade = 0;
    cout << "請輸入" << i + 1 << "號的成績:";
    cin >> grade;
    total += grade;

    if (grade > max) {
      max = grade;
      maxNumber = i + 1;
    }

    if (grade < min) {
      min = grade;
      minNumber = i + 1;
    }
  }
  
  printf("班上最高分是:%d號 %d分\n", maxNumber, max);
  printf("班上最低分是:%d號 %d分\n", minNumber, min);
  printf("\n班級總成績: %d\n", total);
  printf("班平均: %.2f", ((double)total / classMemberCount));
}
