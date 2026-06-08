#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> x(4);

    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int sum = x[3];

    cout << sum - x[2] << " "
         << sum - x[1] << " "
         << sum - x[0] << endl;

    return 0;
}
