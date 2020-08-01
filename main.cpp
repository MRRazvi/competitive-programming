#include <iostream>
#include <set>
#include <unordered_set>

typedef long long ll;
using namespace std;

class MyHashSet {
private:
    unordered_set<int> us;
public:
    MyHashSet() {

    }

    void add(int key) {
        us.insert(key);
    }

    void remove(int key) {
        us.erase(key);
    }

    bool contains(int key) {
        return us.count(key) >= 1;
    }
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int key = 1;
    MyHashSet* obj = new MyHashSet();
    obj->add(key);
    obj->remove(key);
    bool param_3 = obj->contains(key);
    cout << param_3 << endl;
    return 0;
}