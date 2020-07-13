#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

void display (set<int>& s) {
    cout << "Elements: ";
    for (auto num: s)
        cout << num << " ";
    cout << endl;
}

void display (unordered_set<int>& s) {
    cout << "Elements: ";
    for (auto num: s)
        cout << num << " ";
    cout << endl;
}

// set won't contain duplicates elements
// set is automatically in order form
// we can not use [] operator in set
int main() {
    set<int> s = {1, 2};
    s.insert(4);
    s.insert(5);
    s.insert(5); // don't insert the element because of duplication
    s.insert(3);

    display(s); // print all the elements

    cout << "Count: " << s.count(5) << endl; // check specific element
    cout << "Size: " << s.size() << endl; // size of set
    cout << "Erase: " << s.erase(3) << endl; // erase the element
    cout << "Find: " << *s.find(3) << endl; // find the element and return index of it

    unordered_set<int> us = {2, 1, 4, 3, 5}; // same as set but it not sort automatically
    display(us);

    multiset<int> ms = {1, 1, 2, 2, 3, 3, 3}; // same as set but it contain duplicate value
    cout << "Multiset Count: " << ms.count(3) << endl; // check all the element and return count

    return 0;
}