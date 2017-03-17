#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> vi;
    int s, c;
    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "capacity: " << vi.capacity() << "size: " << vi.size() 
         << endl;
    
    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "capacity: " << vi.capacity() << "size: " << vi.size()
         << endl;
    
    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "capacity: " << vi.capacity() << "size: " << vi.size()
         << endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++) {
        vi.push_back(1);
    }
    cout << "capacity: " << vi.capacity() << "size: " << vi.size()
         << endl;
    return 0;
}