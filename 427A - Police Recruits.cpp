#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> events(n);

    for (int i = 0; i < n; i++) {
        cin >> events[i];
    }

    int police = 0;
    int untreated = 0;

    for (int x : events) {
        if (x == -1) {
            if (police > 0) {
                police--;
            } else {
                untreated++;
            }
        } else {
            police += x;
        }
    }

    cout << untreated << endl;

    return 0;
}
