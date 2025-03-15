#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int bits = sizeof(int) * 8;
    int msb = 1 << (bits - 1);

    if (num & msb) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}