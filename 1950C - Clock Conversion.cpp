#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));

        if (hour == 0) {
            cout << "12" << s.substr(2) << " AM\n";
        }
        else if (hour < 12) {
            cout << s << " AM\n";
        }
        else if (hour == 12) {
            cout << s << " PM\n";
        }
        else {
            hour -= 12;

            cout << setw(2) << setfill('0') << hour
                 << s.substr(2) << " PM\n";
        }
    }

    return 0;
}
