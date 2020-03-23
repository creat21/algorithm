#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<char> v;

    string inputStr = "";
    int flag = 1, startInd = 0, endInd = 0, index = 0;
    getline(cin, inputStr);
    int size = inputStr.size();

    while(index != inputStr.size()){
        if(inputStr[index] != '<'){
            for (; (inputStr[index] != ' ') && inputStr[index] != '<'; ++index) {
                if(index == size) break;
                v.push_back(inputStr[index]);
            }

            for (int i = v.size() -1; i != -1 ; --i) {
                cout << v[i];
            }

            if(index == inputStr.size()){
                break;
            }

            if(inputStr[index] == ' '){
                cout << " ";
                index++;
            }

            v.clear();
        }
        else{
            for (; inputStr[index] != '>'; ++index) {
                if(index == size) break;
                v.push_back(inputStr[index]);
            }
            v.push_back(inputStr[index]);
            index++;
            for (int i = 0; i < v.size(); ++i) {
                cout << v[i];
            }
            if(index == inputStr.size()){
                break;
            }

            if(inputStr[index] == ' '){
                cout << " ";
                index++;
            }
            v.clear();
        }
    }


    return 0;
}