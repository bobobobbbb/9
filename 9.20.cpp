#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(void) {
    cout << "Enter a list:" << endl;
    list<int> ilist;
    int temp;
    while (cin >> temp) {       //Enter eof to break input
        ilist.push_back(temp); 
    }
    deque<int> evenDeque;
    deque<int> oddDeque;
    for (auto i : ilist) {
        if (i % 2 == 0) {
            oddDeque.push_back(i);
        } else {
            evenDeque.push_back(i);
        }
    }
    cout << "even are: " << endl;
    for (auto iter = evenDeque.cbegin(); iter != evenDeque.cend(); iter++) {
        cout << *iter << " ";
        cout << end;
    }
    cout << "odd are: " << endl;
    for (auto iter = oddDeque.cbegin(); iter != oddDeque.cend(); iter++) {
        cout << *iter << " ";
        cout << endl;
    }

    return 0;
}