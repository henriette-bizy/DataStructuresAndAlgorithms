#include<iostream>
using namespace std;
#include <list>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Graph{
	private:
		int numNodes;
		list<int> *adjList;
		
	public:
		Graph(int numNodes){
			this->numNodes = numNodes;
			adjList = new list<int> [numNodes];
		}
		
		void add_edge(int src, int dest){
			adjList[src].push_back(dest);
			adjList[dest].push_back(src);
		}
		
		void display(){
			for(int i=0; i<numNodes; i++){
				cout << i << ": ";
				for(auto node:adjList[i]){
					cout << i << " --> " << node << "    ";
				}
				
				cout << endl;
			}
		}

        void DFS(int start_vertex){
            stack<int> stack;
            vector<bool> visited(numNodes, false);

            stack.push(start_vertex);

            cout << " DFS Present form: //" <<start_vertex;
            // visited[start_vertex] = true;

           while(stack.empty()){
               int current = stack.top();

               if(!visited[current]){
                   cout << current <<"" ;
               }
           

          for(auto i = adjList[current].begin(); i!=adjList[current].end(); ++i){
            if(!visited[*i]);
            stack.push(*i);
          }

           }


        stack.pop();
        }
};

int main(){

	Graph g(4);
	g.add_edge(0, 1);
	g.add_edge(1, 2);
	g.add_edge(2, 3);
	g.add_edge(3, 3);
	g.add_edge(1, 3);
	
	g.display();
	
	cout << endl << endl;
	g.DFS(2);

	return 0;
}