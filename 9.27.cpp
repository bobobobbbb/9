#include <iostream>
#include <forward_list>

using namespace std;

int main(void) {
    forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12};

    forward_list<int>::iterator prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr & 1) {
            curr = flst.erase_after(prev);
        } else {
            curr++;
            prev++;
        }
    }
    for (auto iter = flst.begin(); iter != flst.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
