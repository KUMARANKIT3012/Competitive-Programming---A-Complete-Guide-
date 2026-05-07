#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;

    for (int i = 1; i <= w; i++) {
        totalCost += i * k;
    }

    int borrow = totalCost - n;

    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow;

    return 0;
}
