#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int input, index = 2;

    cin >> input;

    while(input != 1){
        if(input % index == 0){
            cout << index <<"\n";
            input /= index;
            index = 2;
        }
        else{
            index++;
        }
    }


    return 0;
}
