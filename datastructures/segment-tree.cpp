#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
private:
    int size;
    vector<int> tree;
public:
    explicit SegmentTree(const vector<int>& arr) {
        this->size = arr.size();
        this->tree.resize(2*arr.size());
        this->build(arr, 0, arr.size()-1, 1);
    }

    void build(vector<int> arr, int start, int end, int index) {
        if (start == end) {
            this->tree[index] = arr[start];
            return;
        }

        int mid = (start+end)/2;
        this->build(arr, start, mid, 2*index);
        this->build(arr, mid+1, end, 2*index+1);
        this->tree[index] = this->tree[2*index] + this->tree[2*index+1];
    }

    int sum(int start, int end, int l, int r, int index) {
        if (l > r)
            return 0;
        if (start == l && end == r)
            return this->tree[index];
        int mid = (start+end)/2;
        return sum(start, mid, l, min(r, mid), 2*index) + sum(mid+1, end, max(l, mid+1), r, 2*index+1);
    }

    int sum(int l, int r) {
        return this->sum(0, this->size-1, l, r, 1);
    }

    void update(int i, int value, int start, int end, int index) {
        if (start == end) {
            this->tree[index] = value;
            return;
        }

        int mid = (start+end)/2;
        if (i <= mid)
            this->update(i, value, start, mid, 2*index);
        else
            this->update(i, value, mid+1, end, 2*index+1);
        this->tree[index] = this->tree[2*index] + this->tree[2*index+1];
    }

    void update(int i, int value) {
        this->update(i, value, 0, this->size-1, 1);
    }

    void display() {
        for (int i=1; i<this->tree.size(); i++)
            cout << this->tree[i] << " ";
        cout << endl;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (auto &input: a)
        cin >> input;

    return 0;
}