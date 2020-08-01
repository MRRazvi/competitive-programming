#include <iostream>
#include <set>
#include <unordered_map>

typedef long long ll;
using namespace std;

class MyHashMap {
private:
    int map[1000000];
public:
    MyHashMap() {
        fill_n(map, 1000000, -1);
    }

    void put(int key, int value) {
        this->map[key] = value;
    }

    int get(int key) {
        return this->map[key];
    }

    void remove(int key) {
        this->map[key] = -1;
    }
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    MyHashMap hashMap = MyHashMap();
    hashMap.put(1, 10);
    hashMap.put(2, 20);
    hashMap.put(3, 30);
    // hashMap.remove(1);
    cout << hashMap.get(1) << endl;
    cout << hashMap.get(2) << endl;
    cout << hashMap.get(3) << endl;

    return 0;
}