#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int cache[1000001];

void solve(int num){

    for (int i = 2; i <= num; ++i) {
        cache[i] = cache[i - 1] + 1;
        if(i % 3 == 0){
            cache[i] = min(cache[i / 3] + 1, cache[i]);
        }
        if(i % 2 == 0){
            cache[i] = min(cache[i / 2] + 1, cache[i]);
        }
    }

}


int main() {
    cin.tie(0);
    memset(cache, 0, sizeof(int) * 1000001);
    cache[1] = 0;
    int input;

    cin >> input;

    solve(input);

    cout << cache[input] << "\n";

    return 0;
}

