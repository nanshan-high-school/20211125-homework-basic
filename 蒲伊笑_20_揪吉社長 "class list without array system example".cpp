#include <iostream>

using namespace std; 
string class_input, seatnumber_input, name_input;
string class_max, seatnumber_max, name_max;
string class_min, seatnumber_min, name_min;
int score_min, score_max, score_input;

void compare(int i) {
    if (score_input > score_max || i == 0) {
        class_max = class_input;
        seatnumber_max = seatnumber_input;
        name_max = name_input;
        score_max = score_input;
    }
    if (score_input < score_min || i == 0) {
        class_min = class_input;
        seatnumber_min = seatnumber_input;
        name_min = name_input;
        score_min = score_input;
    }
}

int main() {
    int average = 0;
    int amount;
    cout << "歸剛ㄟ， 有多少人拉" << "\n";
    cin >> amount;
    cout << "請依序輸入全班成績" << "\n";
    for (int i = 0; i < amount; i++) {
        cin >> class_input >> seatnumber_input >> name_input >> score_input;
        compare(i);
        average += score_input;
    }
    average /= amount;
    cout << "班上成績最好的同學: " << class_max << " " << seatnumber_max << " " << name_max << " " << score_max << endl;
    cout << "班上成績最遜的同學: " << class_min << " " << seatnumber_min << " " << name_min << " " << score_min << endl;
    cout << "平均:" << average;
} 
