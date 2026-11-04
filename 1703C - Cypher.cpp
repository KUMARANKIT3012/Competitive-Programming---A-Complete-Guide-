
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            int m;
            string s;

            cin >> m >> s;

            for (int j = 0; j < m; j++) {
                if (s[j] == 'U') {
                    a[i] = (a[i] + 9) % 10;
                } 
                else {
                    a[i] = (a[i] + 1) % 10;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
