#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

typedef long long ll;
using namespace std;

class Graph {
private:
    int V;
    list<int> *l;
public:
    Graph(int V) {
        this->V = V;
        this->l = new list<int>[V];
    }

    void addEdge(int x, int y) {
        this->l[x].push_back(y);
        this->l[y].push_back(x);
    }

    void traverse() {
        for (int i=0; i<V; i++) {
            cout << i << ": ";
            for (auto j: this->l[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 5);
    g.addEdge(3, 4);
    g.traverse();
    return 0;
}