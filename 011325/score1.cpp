#include <iostream>
using namespace std;

int main() {
	int num = 0, times, total = 0, max = -1, min = 101, maxpeople, minpeople;
	cin >> times;
	for (int i = 0; i < times; i++) {
		cin >> num;
		total += num;
		if (num > max) {
			max = num;
			maxpeople = i+1;
		}
		if (num < min) {
			min = num;
			minpeople = i+1;
		}
	}
	//cout
	cout << "Avg: " << total/times << endl;
	cout << "Max Seat number: " << maxpeople << " scores: " << max << endl;
	cout << "Min Seat number: " << minpeople << " scores: " << min << endl;
} 
