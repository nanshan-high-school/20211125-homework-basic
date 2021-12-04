#include <iostream>
using namespace std;

int main() {
  int num;
  int totalscore = 0;
  int maxscore = -1, maxperson = 0;
  int minperson = 0, minscore = 101;
  
  cout << "請輸入班級總人數:";
  cin >> num;

  for (int i = 1; i < (num + 1); i++) {
    int score = 0;
    cout << "請輸入" << i << "號的總成績:";
    cin >> score;

    totalscore += score;

    if (score <= minscore) {
      minperson = i;
      minscore = score;
    }
    if (score >= maxscore) {
      maxperson = i;
      maxscore = score;
    }

  }
  
  cout << "班級總平均為" << (totalscore / num) << "分\n";
  cout << maxperson << "號為最高分" << maxscore << "分\n";
  cout << minperson << "號為最低分" << minscore << "分\n"; 
} 
