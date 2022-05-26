#include <iostream>
using namespace std;


class AdjacencyMatrix{

private:
  int nodes;
  int **matrix;

public:
  AdjacencyMatrix(int nodes){
   
   this->nodes = nodes;
   matrix = new int*[nodes];
   for(int i=0;i<nodes;i++){
       matrix[i] = new int[nodes];
       for(int j=0;j<nodes;j++){
           matrix[i][j] = 0;
       }
   }

  };

  void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << " " << endl;
        }
    };

    void addEdge(int origin, int destination)
    {
        if (origin <= 0 || destination <= 0 || origin > nodes || destination >= nodes)
        {
            cout << "Invalid operation" << endl;
            return;
        }
        matrix[origin - 1][destination - 1] = 1;
    };

     void removeEdge(int origin, int destination)
    {
        if (origin <= 0 || destination <= 0 || origin > nodes || destination >= nodes)
        {
            cout << "Invalid operation" << endl;
            return;
        }
        
        matrix[origin - 1][destination - 1] = 0;
    };

};

    int main(){


        
    AdjacencyMatrix m(5);
    cout << "this is mee";
    m.addEdge(0, 1);


    // m.display();
    // m.addEdge(1, 2);
    // m.display();
    // m.removeEdge(1,2);
    m.display();
        return 0;
    }