#include <iostream>
using namespace std;

int main() {
  int A = 0, P = 0 , S = 0 , L = 0 , M = 100 , Ln = 0 , Mn = 0;
  cout << "人數:";
  cin >> P ;
  for(int i = 1; i <= P; i++){
    cout << i <<"號的成績為:";
    cin >> S ;
    A+=S;
    if (S >= L){
        L = S;
        Ln = i;
    }
    if (M >= S){
        M = S;
        Mn = i;
    }
  }
  cout << A/P<< "\n";
  cout << "number: "<< Mn <<" is smallest: "<< M<< "\n";
  cout << "number: "<< Ln <<" is biggest: "<< L<< "\n";
}
