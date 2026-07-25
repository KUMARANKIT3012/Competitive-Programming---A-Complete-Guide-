#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int height = 0;
    int current_level_cubes = 0;
    
    while (true) {
        int next_level = height + 1;
        current_level_cubes += next_level;
        
        if (n >= current_level_cubes) {
            n -= current_level_cubes;
            height++;
        } else {
            break;
        }
    }
    
    cout << height << endl;
    return 0;
}
