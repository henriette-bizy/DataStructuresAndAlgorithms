#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{

    private:
           int numbers;
           list<int>adjlist;
    public:
           Graph(int numNodes){
               this->numbers = numNodes;
               adjl
           } 

           void add_edge(int src,int dest){
               adjlist[src].push_back(dest);
               adjlist[des].push_back(src);
           }


           void display(){
  

  for (int i =0; i<



}        
   void Bfs(int staringVertex()){
list<int>queues;
vector<bool> visited(numNodes,false);;


cout<<"Bfs reult trim "<< staringVertex;
queues.push_back(staringVertex);


while( !queues.empty){
    int current = queues.front();
    cout << current;
}
           
for(auto i = adjlist[current].begin ;i=! adjlist[current]){

   end(); 
   ++ i; 
   int adjVertex = * i ;
   if(! visited[adjVertex]){
       queues.push_back(adjVertex);
   }
   visited[current] = true;
queues.pop_front();
}
};

