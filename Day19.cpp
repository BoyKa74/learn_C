#include<iostream>
using namespace std;

int main() {
	int num, k, bitStatucs;
	cin >> num;
	cin >> k;
	bitStatucs = (num >> k) & 1;
	cout << bitStatucs;
	return 0;
}