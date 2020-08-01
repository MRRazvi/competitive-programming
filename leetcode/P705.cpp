// 705. Design HashSet
// https://leetcode.com/problems/design-hashset/
class MyHashSet {
private:
    unordered_set<int> us;
public:
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