#include <bits/stdc++.h>
using namespace std;

int main() {
    string table;
    cin >> table;

    for (int i = 0; i < 5; i++) {
        string card;
        cin >> card;

        if (card[0] == table[0] || card[1] == table[1]) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
