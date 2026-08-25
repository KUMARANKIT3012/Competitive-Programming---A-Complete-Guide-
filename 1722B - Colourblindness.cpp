#include <bits/stdc++.h>
using namespace std;

char norm(char c) {
    return (c == 'G' || c == 'B') ? 'X' : c;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool same = true;
        for (int i = 0; i < n; i++) {
            if (norm(a[i]) != norm(b[i])) {
                same = false;
                break;
            }
        }
        cout << (same ? "YES" : "NO") << "\n";
    }
}
