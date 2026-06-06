#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int count = 1;

    while (true) {
        int total = count * k;

        if (total % 10 == 0 || total % 10 == r) {
            cout << count;
            break;
        }

        count++;
    }

    return 0;
}
