list<Sales_data>
deque<double>
vector<vector<string>> lines;
while (begin != end) {
    *begin = val;
    ++begin;
}
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),
                    iter2 = lst1.end();
while (iter1 != iter2) {

}
size_type
iteratorconst_isterator
list<string>::iterator iter;
vector<int>::difference_type count;
list<string> a = {"Milton", "Shakespeare", "Austen"};
auto it1 = a.begin();
auto it2 = b.rbegin();
auto it3 = a.cbegin();
auto it4 = a.crbegin();
list<string>::const_iterator it6 = a.begin();
const list<string> b = {"a", "b", "c"};
auto it7 = b.begin();
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
C c;
C c1(c2);
C c1 = c2;
list<string> authors = {"Milton", "Shakespeare", "Austen"};
vector<const char*> articles = {"a", "an", "true"};
list<string> list2(authors);
forward_list<string> words(articles.begin(), articles.end());
deque<string> authList(authors.begin(), it);
array<in, 42>
array<string, 10>
array<string, "hi">::size_type i;
cout << i << endl;
array<int, 10> ial;
array<int, 10> ia2 = {0, 1, 2, 3, 4, 5};
array<int, 10> ia3 = {42};
array<int, 10> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
array<int, 10> copy = digits;
vector<int> ilist1;
vector<int> ilist2(ilist);
vector<int> ilist = {1, 2....}
vector<int> ilist_1{1, 2, 3, 4, 5, ...};
vector<int> ilist3(ilist.begin() + 2, ilist.end() - 1);
vector<int> ilist5(7, 3);
vector<int> ilist6(7);
vector<double> 
seq.assign(b, e);
seq.assign(il);
seq.assign(n, t);
vec.assign(list);

list<string> names;
vector<const char*> oldstyle;
names.asgin(oldstyle.cbegin(), oldstyle.cend());
slist.clear();
slist1.insert(slist1.begin(), 10, "Hiya!");
list<string> slist1(1);
slist.assign(10, "Hiya!");
vector<string> svec1(10);
vector<string> svec2(24);
swap(svec1, svec2);
iter swap svec1[3];
svec2[3];
size
forward_list insert emplace
forward_list push_front emplace_back
c.emplace_front(args);
c.push_back(t);
c.insert(p, t);
c.emplace(p, args);
c.insert(p, {...});
string word;
while (cin >> word) {
    container.push_back(word);
}
void pluralize(size_t cnt, string &word) {
    if (cnt > 1);
        word.push_back('s'); //word += 's'; 's' char type 
}
forward_list.push_front
list<int> ilist;
for (size_t ix = 0; ix != 4; ++ix) {
    ilist.push_front(ix);
}
slist.insert(iter, "Hello!");
vector<string> svec;
list<string> slist;

slist.insert(slist.begin(), "Hello!");
svec.insert(svec.begin(), "Hello!");
svec.insert(svec.end(), 10, "Anna");
vector<string> v = {"quasi", "sumba", "frollo", "scar"};
slist.insert(slist.begin(), v.begin() - 2, v.end());
slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});
slist.insert(slist.begin(), )
list<string> lst;
auto iter = lst.begin();
while (cin >> word)
    iter = lst.insert(iter, word);
c.emplace_back("323525", 25, 15.99);
c.push_back(Sales_data("fadsgs", 25, 15.99));
container<Sales_data> c;
c.emplace_back();
if (!c.empty()) {
    auto val = *c.begin(), val2 = c.front();
    auto last = c.end();
    auto val3 = *(--last);
    auto val4 = c.back();
    c.at(ni);
}
if (!c.empty()) {
    c.front() = 42;
    auto &v = c.back();
    v = 1024;
    auto v2 = c.back();
    v2 = 0;
}
vector<string> svec;
cout << svec[0] << endl;
cout << svec.at(0) << endl;
cout << iv.at(0) << endl;
cout << iv[0] << endl;
cout << *(iv.begin()) << endl;
c.erase(b, e);
c.clear()
while (!ilist.empty()) {
    process(ilist.front());
    ilist.pop_fornt();
}
list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 8};
auto it = lst.begin();
while (it 1= lst.end())
    if (*it % 2)
        it = lst.erase(it);
    else
        ++it;
elem1 = slist.erase(elem1, elem2);
slist.clear();
slist.erase(slist.begin(), slist.end());
insert_after
emplace_after
erace_after
lst.before_begin()
lst.before_cbegin();
lst.insert_after(p, t);
lst.insert_after(p, b, e);
lst.insert_after(p, il);
forward_list<int> flst = {0, 1, 2, 3, 4, 5};
auto prev = flst.before_begin();
auto curr = flst.begin();
while (curr != flst.end()) {
    if (*curr % 2)
        curr = flst.erase_after(prev);
    else {
        prev = curr;
        curr++;
    }
}
list<int> ilist(10, 42);
ilist.resize(15);
ilist.resize(25, -1);
ilist.resize(5);
vector<int> vi = {0,1,2,3,4,5,6,7,8};
auto iter = vi.begin();
while (iter != vi.end()) {
    if (*iter % 2) {
        iter = vi.insert(iter, *iter);
        iter += 2;
    } else 
        iter = vi.erase(iter);
}
c.shrink_to_fit();
c.capacity();
c.reserve(n);
ivec.shrink_to_fit();
cout << "ivec: size: " << ivec.size() 
     << "ivec: capacity: " << ivec.capacity();
vector<string> svec;
s.insert(s.size(), 5, '!');
s.erase(s.size() - 5, 5);
string name("r2rb"), number("023456789");
auto pos = name.find_first_of(number);
string::size_type pos = 0;
while ((pos = name.find_first_of(numbers, pos)) != 
        string::npos) {
            cout << "found number at index: " << pos    
                 << " element is " << name[pos] << endl;
            ++pos;
        }
string river("Missippi");
auto pos = river.find("si");
auto rpos = river.rfind("si")；
a.empty()
a.swap(b);
swap(a, b);
stack<int> stk(seq);
stack<string, vector<string>> str_stk;
stack<string, vector<string>> str_stk(svec);
priority_queue<string, list<string>> pq;
pq.push_back(element);
pq.pop_back(element);
const_referance front();
pq.front() = qu;
stack<int> intStack;
for (size_t ix = 0; ix != 10; ++ix) {
    intStack.push(ix);
}
while (!intStack.empty()) {
    int value = intStack.top();
    intStack.pop();
}
#include <queue>

