#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string input, temp, output ="";
    int n[3], result = 0;
    cin >> input;

    for (int i = input.length(); i > 0; i -= 3) {
        if(i < 3){
            temp = input.substr(0 , i);
            n[0] = 0;
            n[1] = 0;
            n[2] = 0;
            if(i == 2){
                n[1] = temp[0] - 48;
                n[2] = temp[1] - 48;
            }
            else{
                n[2] = temp[0] - 48;
            }
            result = (n[0] * 4) + (n[1] * 2) + (n[2]);
            output.append(to_string(result), 0, 1);
        }
        else{
            temp = input.substr(i -3 , 3);
            n[0] = temp[0] - 48;
            n[1] = temp[1] - 48;
            n[2] = temp[2] - 48;
            result = (n[0] * 4) + (n[1] * 2) + (n[2]);
            output.append(to_string(result), 0, 1);
        }

    }
    reverse(output.begin(), output.end());
    cout << output <<"\n";
    return 0;
}
