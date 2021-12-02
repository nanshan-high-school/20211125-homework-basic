#include <iostream>
using namespace std;
int main() {
    int a , score = 0 , total = 0;
    cout << "人數";
    cin >> a ;
    
    for(int i = 1 ; i <= a ; i++){
    cout << i << "號的成績" ;
    cin >> score ;
    total += score ;
    }

    cout << total / a ;
} 