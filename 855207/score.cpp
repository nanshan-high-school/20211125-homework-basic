#include <iostream>
using namespace std;
int main() {
  int peoples = 0;
  int grades = 0;
  int max = -1;
  int maxPerson = 0;
  int min = 101;
  int minPerson = 0;
  
  cout << "請輸入班級人數:";
  cin >> peoples;
  for ( int i = 1 ; i <= peoples ; i++ ) {
    int now;
    cout << "請輸入" << i << "的成績:";
    cin >> now;
    grades += now;
    if (now >= max) {
      max = now;
      maxPerson = i;
      if (now <= min) {
        min = now;
        minPerson = i;
      }
    } else if (now <= min) {
      min = now;
      minPerson = i;
    }
  }
  cout << "全班共" << peoples << "人的平均分數是:" << (double)grades / (double)peoples;
  cout << "\n" << "班上最高分是" << maxPerson << "號，他的分數是" << max << "分";
  cout << "\n" << "班上最低分是" << minPerson << "號，他的分數是" << min << "分";
} 