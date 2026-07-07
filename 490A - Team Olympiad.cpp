#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> prog, math, pe;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 1)
            prog.push_back(i);
        else if (x == 2)
            math.push_back(i);
        else
            pe.push_back(i);
    }

    int teams = min({(int)prog.size(), (int)math.size(), (int)pe.size()});

    cout << teams << "\n";

    for (int i = 0; i < teams; i++) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
    }

    return 0;
}
