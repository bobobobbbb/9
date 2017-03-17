#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v;
    int i, j, t;
    cout << "input 10 number :\n" << endl;
    for (i = 0; i < 10; i++) {
        cin >> j;
        v.push_back(j);
    }
    cout << endl;
    for (j = 0; j < 9; j++)
        for(i = 0; i < 9 - j; i++) 
            if (v[i] > v[i + 1]) {
                t = v[i];
                v[i] = v[i + 1];
                v[i + 1] = t;
            }
    cout << "The sorted numbers: " << endl;
    for (i = 0; i < 10; i++) {
        cout << v[i];
    }

    return 0;    
}