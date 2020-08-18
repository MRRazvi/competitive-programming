#include <iostream>
#include <vector>

using namespace std;

#define SIZE 100

vector<int> v[SIZE];
vector<bool> visited(SIZE, false);

void dfs(int i) {
    if (visited[i])
        return;

    visited[i] = true;
    cout << i << " ";
    for (int j=0; j<v[i].size(); j++) {
        if (!visited[v[i][j]])
            dfs(v[i][j]);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    return 0;
}