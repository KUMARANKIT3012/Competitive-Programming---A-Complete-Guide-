#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = a[0], mx = a[0], ans = 0;

    for(int i = 1; i < n; i++) {
        if(a[i] > mx) {
            ans++;
            mx = a[i];
        }
        else if(a[i] < mn) {
            ans++;
            mn = a[i];
        }
    }

    cout << ans;

    return 0;
}
