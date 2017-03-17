#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main(void) {
    vector<string> svec;
    list<const char *> ilist = {"hello", "world", "!"};
    svec.assign(ilist.begin(), ilist.end());

    cout << svec.capacity() << " " << svec.size() << " "
         << svec[0] << " " << svec[svec.size() - 1] << endl;
    return 0;
}