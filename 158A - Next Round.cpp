#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }

    int result = 0;

    for(int i = 0; i < n; i++){
        if(ans[i] >= ans[k-1] && ans[i] > 0){
            result++;
        }
    }

    cout << result;
}
