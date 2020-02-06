#define mod 1000000009

#include <iostream>
#include <cstdio>

using namespace std;

long long cache[1000001];

int main() {
    int input_tc, input_num;

    cache[1] = 1;
    cache[2] = 2;
    cache[3] = 4;

    for (int j = 4; j <= 1000000; ++j) {
        cache[j] = (cache[j - 1] + cache[j - 2] + cache[j - 3]) % mod;
    }

    scanf("%d", &input_tc);

    for (int i = 0; i < input_tc; ++i) {
        scanf("%d", &input_num);
        printf("%d\n", cache[input_num]);
    }

    return 0;
}
