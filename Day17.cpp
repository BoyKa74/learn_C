#include <iostream>
using namespace std;

int main() {
	int total_seconds, hours, minutes, seconds;
	cin >> total_seconds;
	//Các bạn hãy viết tiếp đoạn mã tại đây
	hours = total_seconds / 3600;
	total_seconds = total_seconds % 3600;
	minutes = total_seconds / 60;
	seconds = total_seconds % 60;
	cout << hours << endl;
	cout << minutes << endl;
	cout << seconds;


}