#include <iostream>
using namespace std;

int main() {
	int times, total = 0, max = -1, min = 101, maxpeople, minpeople;
	cin >> times;
	int arr[times];

	for (int i = 0; i < times; i++) {
		cin >> arr[i];
		total += arr[i];
		if (arr[i] > max) {
			max = arr[i];
			maxpeople = i+1;
		}
		if (arr[i] < min) {
			min = arr[i];
			minpeople = i+1;
		}
	}
	//cout
	cout << "Avg: " << total/times << endl;
	cout << "Max Seat number: " << maxpeople << " scores: " << max << endl;
	cout << "Min Seat number: " << minpeople << " scores: " << min << endl;

	for (int i = 0; i < times; i++) {
		cout << "Seat number:" << i+1 << " scores: " << arr[i] << endl;
	}
	
} 
