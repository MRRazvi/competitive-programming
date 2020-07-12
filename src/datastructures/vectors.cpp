#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int>& v) {
    // print al the elements in vector
    cout << "Elements: ";
    for (int num: v)
        cout << num << " ";
    cout << endl;
}

int main() {
    // dynamic arrays
    vector<int> v(20, 0); // constructor with 20 elements space, init with 0
    v.reserve(20); // same as above to start with 20 space
    v = {1, 2};
    v.push_back(4); // inset element at start
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);

    cout << "Size: " << v.size() << endl; // size of vector
    cout << "Capacity: " << v.capacity() << endl; // total allocate size
    cout << "Max Elements: " << v.max_size() << endl; // maximum numbers that vector can hold
    cout << "Last Element: " << v.back() << endl; // return last element
    cout << "First Element: " << v.front() << endl; // return first element
    cout << "Specific Value: " << v.at(2) << endl; // get value from specific index
    cout << "Specific Value: " << v[2] << endl; // get value from specific index
    cout << "Check Empty: " << v.empty() << endl; // check empty or not
    v.insert(v.begin(), 10); // insert at start
    v.insert(v.end(), 11); // insert at back
    v.push_back(12); // insert at back
    cout << "Insert at start: " << v.front() << endl;
    cout << "Insert at start: " << v.back() << endl;
    v.pop_back(); // remove element from end
    v.erase(v.end() - 1, v.end());
    v.erase(v.begin(), v.begin() + 1); // remove first element from vector

    sort(v.begin(), v.end()); // sort the elements in asc order
    display(v);
    sort(v.rbegin(), v.rend()); // sort the elements in desc order
    display(v);

    // swap, to swap two vectors
    return 0;
}