#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int result = 0;
    
    while(b >= a){
        a = a*3;
        b = b*2;
        result++;
    }
    
    cout<<result;
}
