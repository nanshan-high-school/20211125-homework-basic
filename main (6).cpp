#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "請輸入班級人數:";
  cin >> n ;
  cout << "\n";
  int g;
  int a=1;
  int sum=0;
  int name;
  int max=-1;
  int num1[n];
  for (int i=0 ; i<n;i++){
    num1[i]=-1;
  }
  int min=101;
  int num2[n];
  for (int i=0 ; i<n;i++){
    num2[i]=-1;
  }
  int mx;
  int mi;
  int w=1;
  int c=1;
  while(1){

    cout<< a << "的成績是:";
    cin >> g;
    cout << "\n";
    sum=sum+g;
    if (max<g){
      max=g;
      num1 [0] = a;
    } else if (max == g){
      num1 [w] = a;
      w++;
    } else if (min>g){
      min=g;
      num2[0]=a;
    } else if (min == g){
      num2 [c] = a;
      c++;
    }

    
    if (a>=n) {
      break;
    }
    a=a+1;
  }
  sum = sum / n;
  cout << "總平均是" << sum <<"\n" ;
  for (int i=0;i<n;i++){
    if (num1[i]!=-1){
      cout  << "最高分是" << num1[i]<<"號  "<< max <<"分"<<"\n";

    }
  }
  for (int i=0;i<n;i++){
    if (num2[i]!=-1){
      cout  << "最低分是" << num2[i]<<"號  "<< min <<"分"<<"\n";

    }
  }
} 