#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

struct student{
    string class_name;
    string seatnumber;
    string name;
    int score;
};
bool cmp(student a, student b){ 
    return a.score > b.score;
}

int main() {
    int average = 0;
    int amount;
    vector<student> list;
    cout << "歸剛ㄟ， 有多少人拉" << "\n";
    cin >> amount;
    cout << "請依序輸入全班成績" << "\n";
    student temp;
    for (int i = 0; i < amount; i++) {
        cin >> temp.class_name >> temp.seatnumber >> temp.name >> temp.score;
        list.push_back(temp);
        average += temp.score;
    }
    sort(list.begin(), list.end(), cmp);
    average /= amount;
    cout << "班上成績最好的同學: " << list[0].class_name << " " << list[0].seatnumber<< " " << list[0].name << " " << list[0].score << endl;
    cout << "班上成績最遜的同學: " << (list.end() - 1) -> class_name << " " << (list.end() - 1) -> seatnumber << " " << (list.end() - 1) -> name << " " << (list.end() - 1) -> score<< endl;
    cout << "平均:" << average;
} 
