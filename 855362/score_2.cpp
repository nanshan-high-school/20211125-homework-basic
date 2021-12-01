#include <iostream>
using namespace std;

int main() {
  int A = 0, P = 0 , S = 0 , L = -1 , M = 101 , Ln = 0 , Mn = 0, Li = 0 , Mi = 0;
  cout << "人數:";
  cin >> P ;
  int a [P];
  int Ma [P];
  int La [P];
  Ma [0]=101;
  La [0]=-1;
  for(int i = 1; i + 1 <= P; i++){
  La [i]=0;
  }
  for(int i = 1; i + 1 <= P; i++){
  Ma [i]=0;
  }
  int Mf [P];
  int Lf [P];
  Mf [0]=101;
  Lf [0]=-1;
  for(int i = 1; i + 1 <= P; i++){
  Lf [i]=0;
  }
  for(int i = 1; i + 1 <= P; i++){
  Mf [i]=0;
  }
  for(int i = 0; i + 1 <= P; i++){
    cout << i + 1 <<"號的成績為:";
    cin >> S ;
    A+=S;
    a[i] = S ;
    if (S >= L){
        L = S;
        Ln = i;
    }
    if (La[Li] <= S){
      if (La[Li] == S){
        La[Li + 1] = S;
        Lf[Li + 1] = i + 1;
        Li ++;
      }else{
        for(int i = 0; i + 1 <= P; i++){
        Lf [i]=0;
        }
        Li = 0;
        La[Li] =  S;
        Lf[Li] =  i + 1;
      }
    }
    if (M > S){
        M = S;
        Mn = i;
    }
    if (Ma[Mi] >= S){
      if (Ma[Mi]  == S){
        Ma[Mi + 1] = S;
        Mf[Mi + 1] = i + 1;
        Mi ++;
      }else{
        for(int i = 0; i + 1 <= P; i++){
        Mf [i]=0;
        }
        Mi = 0;
        Ma[Mi] =  S;
        Mf[Mi] = i + 1;
      }
    }
  }
  cout << A/P<< "\n";
  cout << "all score: ";
  for(int i = 0; i + 1 <= P; i++){
  cout << a[i]<<" ,";
  }
  cout <<"\n";
  cout << "numbers: ";
  for(int i = 0; i + 1 <= P; i++){
  cout << Mf[i]<<" ,";
  }
  cout <<" is smallest: "<< M<< "\n";
  cout << "numbers: ";
  for(int i = 0; i + 1 <= P; i++){
  cout << Lf[i]<<" ,";
  }
  cout << " is biggest: "<< L<< "\n";
}
