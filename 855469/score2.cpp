#include <iostream>
using namespace std;
int main() {
  int num, total = 0, best_score = 0, best_seat_num = -1, worst_score = 101, worst_seat_num = 0;
  cin >> num;
  int score[num];
  for(int i = 0; i < num; i++){
      cout << i + 1 << ": ";
      cin >> score[i];
      if(score[i] > best_score){
        best_score = score[i];
        best_seat_num = i + 1;
      }
      
      if(score[i] < worst_score){
        worst_score = score[i];
        worst_seat_num = i + 1;
      }

      total += score[i];
  }
  cout << "\naverage: " << float(total) / num;
  
  cout << "\nbest score: " << best_score;
  cout << "\nbest seat number(s): ";
  for(int i = 0; i < num; i++){
    if(score[i] == best_score){
      cout << i+1 << " ";
    }
  }
  
  cout << "\nworst score: " << worst_score;
  cout << "\nworst seat number(s): ";
  for(int i = 0; i < num; i++){
    if(score[i] == worst_score){
      cout << i+1 << " ";
    }
  }
}
