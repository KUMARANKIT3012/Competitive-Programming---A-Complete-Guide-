#include <iostream>
#include <string>

using namespace std;

void solve() {
    string w;
    cin >> w;
    w.pop_back();
    w.pop_back();
    w += 'i';
    cout << w << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
