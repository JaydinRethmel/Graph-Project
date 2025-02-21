// Title - Graph Project (MP1)
// Author - Jaydin Rethmel
// Description - This project is a assignment for course ECCS2681 - Data Structures and Algorithms 2. The goal for this project is to write code that
//               Stores graph information in bot ha adjacency matrix and adjacency list. This is a relatively simple project that will help me understand
//               how to work with graphs in C++, and improve my skills with data structures and algorithms.

#include <iostream>
#include <vector>
#include <list>
using namespace std;

/**
 * We will implement the graph using an adjacency matrix and an adjacency list.
 * to being we will start by using an adjacency list. To do so we will create a class called Graph that will
 * be made up of a vector of lists.
 * 
 * Instance Variables:
 * - numVertices: Number of vertices in the graph
 * - adjLists: A vector of lists that will store the adjacency list for each vertex
 * 
 * Methods:
 * Graph(int vertices): Constructor that initializes the number of vertices and resizes the adjLists vector
 * addEdge(int src, int dest): Function to add an edge to the graph
 * printGraph(): Function to print the graph
 * 
 */

 class Graph {
    private:
        int numVertices; 
        vector<list<int>> adjLists; 

    public:
        Graph(int vertices);  
        void addEdge(int src, int dest); 
        void printGraph();
};

Graph::Graph(int vertices) {
    numVertices = vertices;
    adjLists.resize(vertices);
}

void Graph::addEdge(int src, int dest) {
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

void Graph::printGraph() {
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex " << i << " has the following neighbors: ";
        for (int neighbor : adjLists[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}


int main() {
}
