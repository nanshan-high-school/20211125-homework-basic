#include <iostream>
using namespace std;

int main() {
  int num = 1, totalscore = 0, maxscore = -1, minscore = 101;
  cout << "請輸入班級總人數:";
  cin >> num;
  int score[num];
  int maxperson[1000] = {0};
  int minperson [1000] = {0};
  
  //int* maxperson = new int[num];
  //int* minperson = new int[num];

  for (int i = 0; i < num; i++) {
    cout << "請輸入" << i + 1 << "號的成績:";
    cin >> score[i];

    totalscore += score[i];

    if (score[i] <= minscore) {
      if (score[i] == minscore) {
        minperson[i] = i + 1;
      }

      if (score[i] < minscore) {
        for (int j = 0; j < num; j++) {
          minperson[j] = 0;
        }
        minperson[i] = i + 1;
        minscore = score[i];
      }
    }

    if (score[i] >= maxscore) {
      if (score[i] == maxscore) {
        maxperson[i] += i + 1;
      }

      if (score[i] > maxscore) {
        for (int j = 0; j < num; j++) {
          maxperson[j] = 0;
        }
        maxperson[i] = i + 1;
        maxscore = score[i];
      }
    }
  }

  cout << "班級總平均為" << (totalscore / num) << "分\n";
  
  for (int k = 0; k < num; k++) {
    if (maxperson[k] > 0) {
      cout << maxperson[k] << " ";
    }
  }
  cout << "號為最高分" << maxscore << "分\n";

  for (int k = 0; k < num; k++) {
    if (minperson[k] > 0) {
      cout << minperson[k] << " ";
    }
  }
  cout << "號為最低分" << minscore << "分\n";
} 
