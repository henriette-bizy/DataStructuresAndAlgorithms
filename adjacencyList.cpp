#include <iostream>
#include <vector>
using namespace std;

class AdjacencyList{
private:
  int node;
  vector<int> *adjlist;

public:
     AdjacencyList(int nodes){
      
      this->node = nodes;
      adjlist = new vector<int> [node];

     };
    
    void display(){
     for(int i=0;i<node;i++){
      cout<<"Node" +i;
      for(auto v:adjlist[i]){
          cout<<"->"<<v;
      }
     cout<<endl;
     }
    }

     void addEdge(int origin, int destination) {
        adjlist[origin].push_back(destination);
        adjlist[destination].push_back(origin);
    }


    void del_edge(int origin, int destination){
        for(int i=0;i<adjlist[origin].size();i++){
        if(adjlist[origin][i] == destination){
          adjlist[origin].erase(adjlist[origin].begin()+i);
          break;
        }
    }

    for(int i =0;i<adjlist[destination].size();i++){
        if(adjlist[destination][i] == origin){
            adjlist[destination].erase(adjlist[destination].begin()+i);
            break;
        }
    }
}
};
int main(){
    
    int vertices =5;

    AdjacencyList ad(vertices);
    
    ad.addEdge(0,1);
    ad.addEdge(0,2);
    ad.addEdge(1,3);
    ad.del_edge(3,2);
    ad.display();
    return 0;
}
