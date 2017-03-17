#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main(void) {
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 423, 38, 48};
    vector<int> iv;
    list<int> il;

    iv.assign(ia, ia + 11);
    il.assign(ia, ia + 11);

    for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++) {
        if (*iter & 1) {
            iter = iv.erase(iter);
        } else {
            cout << *iter << " ";
            iter++;
        }
    }
    cout << endl;
    for (list<int>::iterator iter = il.begin(); iter != il.end(); iter++) {
        if (!(*iter & 1)) {
            iter = il.erase(iter);
        } else {
            cout << *iter << " ";
            iter++;
        }
    }
    cout << endl;
    return 0;
}