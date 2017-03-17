#include <iostream>
#include <list>
using namespace std;
int main(void) {
    list<int> ilst = {1, 2, 3, 4, 5, 6, 7, 8};
    auto curr = ilst.begin();
    while (curr != ilst.end()) {
        if (*curr & 1) {
            curr = ilst.insert(curr, *curr);
            curr++; curr++;
        } else {
            ilst.erase(curr);
        }
    }
    for (curr = ilst.begin(); curr != ilst.end(); curr++)
        cout << *curr << " ";
    cout << endl;

    return 0;
}

int main(void) {
    forward_list<int> iflst = {0,1,2,3,4,5,6,7,8};
    auto prev = iflst.before_begin();
    auto curr = iflst.begin();
    while (curr != iflst.end()) {
        if (*curr & 1) {
            curr = iflst.insert_after(curr, *curr);
            prev = curr;
        } else  
            curr = iflst.erase_after(curr);
    }
    for (curr = iflst.begin(); curr != iflst.end(); curr++) {
        cout << *curr << " ";
    }
    cout << endl;
}