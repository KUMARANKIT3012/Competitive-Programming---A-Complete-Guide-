#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> a = {x1, x2, x3};

    sort(a.begin(), a.end());

    cout << a[2] - a[0];

    return 0;
}
