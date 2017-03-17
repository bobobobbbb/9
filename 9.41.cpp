#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<char> vc = {'H', 'e', 'l', 'l', 'o'};
    string s(vc.data(), vc.size());
    return 0;
}