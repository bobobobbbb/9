#include <iostream>
#include <vector>
#include <forward_list>

using namespace std;

void insertInFlst(forward_list<string> &, const string &, const string &);

int main() {
    forward_list<string> flst = {"I", "like", "c++", "it's", "make", "me", "happy"};
    insertInFlst(flst, "make", "happy");  
    for (string i : flst) {
        cout << i << endl;
    }  

    return 0;
}

void insertInFlst(forward_list<string> &flst, const string &s1, const string &s2) {           
    auto curr = flst.begin();
    auto prev = flst.before_begin();
    bool inserted = true;
    while (curr != flst.end()) {
        if (*curr == s1) {
            curr = flst.insert_after(curr, s2);
            curr++;
        } else {
            prev = curr;
            curr++;
        }
    }
    if (!inserted) {
        flst.insert_after(prev, s2);
    }
}