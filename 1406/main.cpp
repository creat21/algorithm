//#include <iostream>
//#include <list>
//#include <string>
//#include <iterator>
//using namespace std;
//int main() {
////    cin.tie(NULL);
//
//    list<char> answer;
//
//    int initStringSize = 0;
//    string str = "";
//    int orderNum = 0;
//    cin >> str;
//    cin.ignore();
//
//    cin >> orderNum;
//    cin.ignore();
//
//
//    initStringSize = str.size();
//    for (int i = 0; i < initStringSize; ++i) {
//        answer.push_back(str[i]);
//    }
//    list<char>::iterator cursor = answer.end();
//
//    for (int j = 0; j < orderNum; ++j) {
//        char order;
//        cin >> order;
//        cin.ignore();
//
//        if (order == 'P') {
//            char inputStr;
//            cin >> inputStr;
//            cin.ignore();
//            answer.insert(cursor, inputStr);
//        } else if (order == 'L') {
//            if (cursor != answer.begin()) {
//                cursor--;
//            }
//        } else if (order == 'D') {
//            if (cursor != answer.end()) {
//                cursor++;
//            }
//        } else if (order == 'B') {
//            if (cursor != answer.begin()) {
//                cursor = answer.erase(--cursor);
//            }
//
//        }
//
//
//        for (list<char>::iterator it = answer.begin(); it != answer.end(); it++) {
//            cout << *it;
//        }
//        cout << "\n";
//        return 0;
//    }
//}


#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
//    cin.tie(NULL);

    list<char> answer;
    list<char>::iterator cursor;
    int initStringSize = 0;
    string str = "";
    int orderNum = 0;
    cin >> str;
    cin.ignore();

    initStringSize = str.size();
    for (int i = 0; i < initStringSize; ++i) {
        answer.push_back(str[i]);
    }
    cursor = answer.end();
    cin >> orderNum;
    cin.ignore();

    for (int j = 0; j < orderNum; ++j) {
        char order;
        cin >> order;
        cin.ignore();

        if(order == 'P'){
            char inputStr;
            cin >> inputStr;
            cin.ignore();
            answer.insert(cursor, inputStr);
        }
        else if(order == 'L'){
            if(cursor != answer.begin()){
                cursor--;
            }
        }
        else if(order == 'D'){
            if(cursor != answer.end()){
                cursor++;
            }
        }
        else if(order == 'B'){
            if(cursor != answer.begin()){
                cursor = answer.erase(--cursor);
            }
        }
    }


    for(char c : answer){
        cout<< c;
    }
    cout << "\n";

    return 0;
}