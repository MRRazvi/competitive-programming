#include <iostream>
#include <vector>

using namespace std;

vector<int> insertion(vector<int>& v) {
    int i, j, key;
    for (i=1; i<v.size(); i++) {
        key = v[i];
        j = i-1;
        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    return v;
}

void display(const vector<int>& v) {
    for (auto num: v)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> tc1 = {5, 2, 4, 6, 1, 3};
    insertion(tc1);
    display(tc1);
}