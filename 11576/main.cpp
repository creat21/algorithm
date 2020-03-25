#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    int a, b, m;
    int temp, mid_temp = 0;
    string answer = "", temp_str = "";
    cin >> a >> b;

    cin >> m;

    for (int i = m - 1; i >= 0; --i) {
        cin >> temp;

        mid_temp += temp * pow(a, i);
    }

    while(mid_temp){
        temp = mid_temp % b;
        mid_temp /= b;

        answer += " ";
        temp_str = to_string(temp);
        reverse(temp_str.begin(), temp_str.end());
        answer += temp_str;
    }

    reverse(answer.begin(), answer.end());

    cout << answer <<"\n";

    return 0;
}
