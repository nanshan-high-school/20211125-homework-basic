#include <iostream>
using namespace std;
int main() {
  int num, total = 0, best_score = 0, best_seat_num = -1, worst_score = 101, worst_seat_num = 0;
  cin >> num;
  for(int i = 1; i <= num; i++){
      cout << i << ": ";
      int score;
      cin >> score;

      if(score > best_score){
        best_score = score;
        best_seat_num = i;
      }
      
      if(score < worst_score){
        worst_score = score;
        worst_seat_num = i;
      }

      total += score;
  }
  cout << "\naverage: " << float(total) / num;
  cout << "\nbest seat number: " << best_seat_num;
  cout << "\nbest score: " << best_score;
  cout << "\nworst seat number: " << worst_seat_num;
  cout << "\nworst score: " << worst_score;
}
