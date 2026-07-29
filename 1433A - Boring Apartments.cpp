#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int digit = x[0] - '0';
        int len = x.length();

        cout << (digit - 1) * 10 + len * (len + 1) / 2 << "\n";
    }

    return 0;
}
