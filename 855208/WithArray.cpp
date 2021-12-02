#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int classMemberCount = 1;
  cout << "請輸入班級人數: ";
  cin >> classMemberCount;

  int total = 0;
  int maxGrade = -1, minGrade = 101;
  string minSeatNumbers, maxSeatNumbers;
  vector<int> grades(classMemberCount);
  
  // 輸入同時順便找最高、低分
  for (int i = 0; i < classMemberCount; i++) {
    int grade = 0;
    cout << "請輸入" << i + 1 << "號的成績:";
    cin >> grade;

    if (grade > maxGrade) {
      maxGrade = grade;
    }
    if (grade < minGrade) {
      minGrade = grade;
    }

    total += grade;
    grades[i] = grade;
  }

  // 找出最高、低分的人
  for (int i = 0; i < classMemberCount; i++) {
    if (grades[i] == minGrade) {
      minSeatNumbers += " " + to_string(i + 1);
    } else if(grades[i] == maxGrade) {
      maxSeatNumbers += " " + to_string(i + 1);
    }
  }
  
  cout << "\n班上最高分是:" << maxSeatNumbers << "號 " << maxGrade << "分" << endl;
  cout << "班上最低分是:" << minSeatNumbers << "號 " << minGrade << "分";
  printf("\n班級總成績: %d\n", total);
  printf("班平均: %.2f", ((double)total / classMemberCount));
}
