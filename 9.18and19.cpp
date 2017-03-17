#include <iostream>
#include <list>

using namespace std;

int main(void) {
    string word;
    list<string> words;
    while (cin >> word) {
        words.push_back(word);
    }
    for (auto iter = words.cbegin(); iter != words.cend(); iter++) {
        cout << *iter << endl;
    }
    return 0;
}