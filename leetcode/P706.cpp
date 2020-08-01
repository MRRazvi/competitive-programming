// 706. Design HashMap
// https://leetcode.com/problems/design-hashmap/
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