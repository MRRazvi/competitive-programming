#include <iostream>
#include <list>

using namespace std;

void display(list<int>& l);

int main() {
    list<int> l;
    auto it = l.begin();
    advance(it, 3);

    l.push_front(2);
    l.push_front(1);
    l.push_front(0);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.insert(it, 3);
    display(l);
    cout << l.size() << endl;
}

void display(list<int>& l) {
    for (auto num: l)
        cout << num << " ";
    cout << endl;
}