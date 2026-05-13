#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int curr = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        curr -= a;
        curr += b;

        ans = max(ans, curr);
    }

    cout << ans;

    return 0;
}
