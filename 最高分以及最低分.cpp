#include <iostream>
using namespace std;
int main() {
    int p = 0 , score = 0 , max = 0 , min = 100 , i1 = 0 , i2 = 0;
    cout << "人數" << '\n' ;
    cin >> p ;

    for(int i = 1 ; i <= p ; i++){
    cout << i << "號的成績: " << '\n';
    cin >> score ;
    if (max <= score){
        max = score ;
        i1 = i;
    }
    if(score <= min){
        min = score ;
        i2 = i ;
        }
    }
    cout << "最大值為" << i1 << "號的成績" << max << '\n';
    cout << "最小值為" << i2 << "號的成績" << min << '\n';
} 