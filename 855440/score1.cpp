#include <iostream>
using namespace std;

int main() {
    int num, num_b, num_s, i, total, score, b_score, s_score, a;
    i = 1;
    score = 1;
    total = 0;
    b_score = 0;
    s_score = 100;
    cout << "請輸入班級人數:";
    cin >> num;
    while (i < num + 1) {
        cout << i;
        cout << "號的分數:";
        cin >> score;
        total += score;
        if (b_score <= score){
            b_score = score;
            num_b = i;
        } 
        if (s_score >= score){
            s_score = score;
            num_s = i;
        }
        i += 1;
    }
    a = total / num;
    cout << "全班總平均:" << a << "\n";
    cout << "最高分的是" << num_b << "號" << b_score <<"分" << "\n";
    cout << "最低分的是" << num_s << "號" << s_score <<"分";
} 