
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long sum = a + b + c;
        long long days = (n / sum) * 3;
        long long rem = n % sum;

        if (rem > 0) {
            if (rem <= a) {
                days += 1;
            }
            else if (rem <= a + b) {
                days += 2;
            }
            else {
                days += 3;
            }
        }

        cout << days << endl;
    }

    return 0;
}
