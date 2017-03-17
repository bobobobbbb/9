#include <iostream>
#include <vector>
#include <string>

using namespace std;
void input_string(string &s) {
    s.reserve(100);
    char ch;
    while (cin >> ch) {
        s.push_back(ch);
    }
}
int main(void) {
    string s;
    input_string(s);
    cout << s << endl;
    return 0;
}