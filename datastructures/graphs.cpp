#include <iostream>
#include <vector> // for adjacency matrix purpose
#include <stack> // for bfs, dfs purpose
#include <algorithm>

using namespace std;

class Graph {
private:
    int vertices = 0;
    vector<vector<int>> matrix;
    vector<bool> visited;

public:
    explicit Graph() {
        this->setVertices(0);
    }

    explicit Graph(int n) {
        this->setVertices(n);
    }

    void setVertices(int n) {
        this->vertices = n;
        this->matrix.assign(n, vector<int>(n, 0));
    }

    void addEdge(int row, int col) {
        this->matrix[row][col] = 1;
        this->matrix[col][row] = 1;
    }

    void removeEdge(int row, int col) {
        this->matrix[row][col] = 0;
        this->matrix[col][row] = 0;
    }

    void DFS(int start) {
        cout << start << " ";
        this->visited[start] = true;
        for (int i=0; i<this->vertices; i++) {
            if (this->matrix[start][i] == 1 && this->visited[i] != true)
                this->DFS(i);
        }
    }

    void displayDFS() {
        this->visited.assign(this->vertices, false);
        this->DFS(0);
    }

    void BFS() {

    }

    void displayMatrix() {
        for (const auto& row: this->matrix) {
            for (auto column: row) {
                cout << column << " ";
            }
            cout << endl;
        }
    }

    void display() {
        this->displayDFS();
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 3);
    // graph.displayMatrix();
    graph.display();
    return 0;
}