#include <iostream>
using namespace std;
int main() {
int sum = 0,n,grade,maxn = 0,max = 0,minn = 0,min = 100;
cin >> n;
for (int i = 0;i < n;i++) {
  cout << i+1 << ":";
  cin >> grade;
  if (grade > max) {
    maxn = i + 1;
    max = grade;
  }
  if (grade < min) {
    minn = i + 1;
    min = grade;
  }
  sum += grade;
}
cout << sum/n << "\n";
cout << maxn << "最大 :" << max << "\n";
cout << minn << "最小 :" << min << "\n";


} 