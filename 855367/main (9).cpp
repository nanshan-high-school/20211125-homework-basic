#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int max = -1;
  int min = 101;
  int a = 0;
  int b = 0;
  int c = 0;
  for(int i = 1; i <= n; i++){
    cout << "請輸入" << i << "號的成績";
    cin >> a;
    if(a > max) {
      max = a;
      b = i;
    }
    else if(a < min){
      min  = a;
      c = i;
    }
    
  }
  cout << "最高為" << b << "號" << max << "分" <<"\n";
  cout << "最低為" << c << "號" << min << "分";
}