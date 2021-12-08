#include <iostream>
using namespace std;
int main() {
  

  int totalStudent = 0;
  int maxScore = -1, maxStudent = 0;
  int minScore = 101, minStudent = 0;
  int sum;
  
  cout << "班級總人數: ";
  cin >> totalStudent;

  int score[totalStudent];

  for(int num = 0; num < totalStudent; num++){

    cout << num + 1 << "號的分數: ";
    cin >> score[num];

    if(score[num] > maxScore){

      maxScore = score[num];

    } else if (score[num] < minScore){

      minScore = score[num];

    }

    sum += score[num];

  }

  cout << "\n";
  cout << "平均分數: " << sum / totalStudent << "\n";
  cout << "最高分的是";

  for (int num = 0; num < totalStudent; num++){

    if(score[num] == maxScore){

      cout << num+1 << ",";

    }

  }

  cout << "\b號" << maxScore << "分 \n";

  cout << "最低分的是";

  for (int num = 0; num < totalStudent; num++){

    if(score[num] == minScore){

      cout << num+1 << ",";

    }

  }

  cout << "\b號" << minScore << "分 \n";


} 