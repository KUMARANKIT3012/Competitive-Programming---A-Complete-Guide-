#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string prev, curr;
    cin >> prev;

    int count = 1;

    for (int i = 1; i < t; i++) {
        cin >> curr;
        if (curr != prev) {
            count++;
        }
        prev = curr;
    }

    cout << count << endl;
}
