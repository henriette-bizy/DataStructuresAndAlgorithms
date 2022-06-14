#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;
class Graph
{
private:
    int nodes;
    list<int> *adjList;
public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjList = new list<int>[nodes];
    }
    void display()
    {
        // outer loop to print the current node
        for (int i = 0; i < nodes; i++)
        {
            cout << i;
            for (auto v : adjList[i])
            {
                cout << "->" << v;
            }
            cout << endl;
        }
    }
    void addEdge(int origin, int destination)
    {
        adjList[origin].push_back(destination);
        adjList[destination].push_back(origin);
    }
    void bfs(int startingVertex)
    {
        list<int> queue;
        vector<bool> visited(nodes, false);
        cout << "BFS result from: " << startingVertex <<endl;
        queue.push_back(startingVertex);
        visited[startingVertex] = true;
        while (!queue.empty())
        {
            int current = queue.front();
            cout << current << "->";
            for (auto i = adjList[current].begin(); i != adjList[current].end(); i++)
            {
                int adjVertex = *i;
                if (!visited[adjVertex])
                {
                    queue.push_back(adjVertex);
                    visited[adjVertex] = true;
                }
            }
            queue.pop_front();
        }
    }
    void dfs(int startVertex) {
        stack<int> stack;
        vector<bool> visited(startVertex, false);
        stack.push(startVertex);
        cout << "DFS result from: " << startVertex<<endl;
        // visited[startVertex] = true;
        while(!stack.empty()) {
            int current = stack.top();
             stack.pop();
            if(!visited[current]) {
                visited[current] = true;
                cout << current <<" ";
            }
            for(auto i = adjList[current].begin(); i!= adjList[current].end(); ++i) {
                if(!visited[*i]) {
                    stack.push(*i);
                }
            }
           
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    // g.addEdge(1, 0);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(1, 3);
    g.display();
    // g.bfs(2);
    // g.display();
    g.dfs(2);
    g.display();
    return 0;
}