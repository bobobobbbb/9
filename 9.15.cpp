#include <iostream>
#include <vector>

using namespace std;

bool l_v_equal(vector<int> &v, list<int> &l  {
    if (v.size() != l.size())
        return false;
    auto lb = l.cbegin();
    auto le = l.cend();
    auto vb = v.cbegin();
    for (; lb != le; lb++, vb++) {
        if (*lb != *vb)
            return false;
    }
    return true;
}
int main(void) {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
    list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    list<int> ilist1 = {1, 2, 3, 4, 5, 6, 7};
    list<int> ilist2
    list<int> ilist3
    list<int> ilist4

    cout << l_v_equal(ivec, ilist) << endl;
    cout << l_v_equal(ivec, ilist1) << endl;
    cout << l_v_equal(ivec, ilist2) << endl;
    cout << l_v_equal(ivec, ilist3) << endl;

    return 0;
}