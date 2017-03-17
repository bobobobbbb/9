#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(void) {
    list<int> ilist = {1, 2, 3, 4, 5, 6};
    vector<double> vlist(ilist.begin(), ilist.end());
    cout << vlist.capacity() << " " << vlist.size() << " "
         << vlist[0] << " " << vlist.size();
    cout << vlist.capacity() << " " << vlist.size() << " "
         << vlist[0] << " " << vlist.size();
    return 0;
}