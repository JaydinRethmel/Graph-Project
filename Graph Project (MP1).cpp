// Title - Graph Project (MP1)
// Author - Jaydin Rethmel
// Description - This project is a assignment for course ECCS2681 - Data Structures and Algorithms 2. The goal for this project is to write code that
//               Stores graph information in bot ha adjacency matrix and adjacency list. This is a relatively simple project that will help me understand
//               how to work with graphs in C++, and improve my skills with data structures and algorithms.

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <string>
using namespace std;

/**
 * We will implement the graph using an adjacency matrix and an adjacency list.
 * to being we will start by using an adjacency list. To do so we will create a class called Graph that will
 * be made up of a vector of lists.
 * 
 * Instance Variables:
 * - numVertices: Number of vertices in the graph
 * - adjLists: A vector of lists that will store the adjacency list for each vertex
 * - verticeNames: A hash map that will store the name of each vertex
 * 
 * Methods:
 * - Graph(int vertices): Constructor that initializes the number of vertices and resizes the adjLists vector
 * - addEdge(int src, int dest): Function to add an edge to the graph
 * - setNodeName(int node, string name): Function to set the name of a node
 * - printGraph(): Function to print the graph
 * 
 */

 class Graph {
    private:
        int numVertices; 
        vector<list<pair<int, int>>> adjLists; 
        unordered_map<int, string> verticeNames;

    public:
        Graph(int vertices);  
        void addEdge(int src, int dest, int weight); 
        void setNodeName(int node, const string& name);
        void printGraph();
};

Graph::Graph(int vertices) {
    numVertices = vertices;
    adjLists.resize(vertices);
}

void Graph::addEdge(int src, int dest, int weight) {
    adjLists[src].push_back(make_pair(dest, weight));
    adjLists[dest].push_back(make_pair(src, weight));
}

void Graph::setNodeName(int node, const string& name) {
    verticeNames[node] = name;
}

void Graph::printGraph() {
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex " << verticeNames[i] << " has the following neighbors: \n";
        for (const auto& neighbor : adjLists[i]) {
            cout << verticeNames[neighbor.first] << " , weight: " << neighbor.second << ") \n";
        }
        cout << endl;
    }
}


int main() {
    // create a graph with 7 vertices
    Graph mainGraph(7);

    // Set the names of the vertices
    mainGraph.setNodeName(0, "Dallas");
    mainGraph.setNodeName(1, "Austin");
    mainGraph.setNodeName(2, "Washington");
    mainGraph.setNodeName(3, "Denver");
    mainGraph.setNodeName(4, "Chicago");
    mainGraph.setNodeName(5, "Atlanta");
    mainGraph.setNodeName(6, "Houston");

    // Edges for "Dallas"
    mainGraph.addEdge(0, 1, 200);
    mainGraph.addEdge(0, 3, 780);
    mainGraph.addEdge(0, 4, 900);

    // Edges for "Austin"
    mainGraph.addEdge(1, 6, 160);
    mainGraph.addEdge(1, 0, 200);
    
    // Edges for "Washington"
    mainGraph.addEdge(2, 0, 1300);
    mainGraph.addEdge(2, 5, 600);
    
    // Edges for "Denver"
    mainGraph.addEdge(3, 4, 1000);
    mainGraph.addEdge(3, 5, 1400);
    
    // Edges for "Chicago"
    mainGraph.addEdge(4, 3, 1000);
    
    // Edges for "Atlanta"
    mainGraph.addEdge(5, 3, 600);
    mainGraph.addEdge(5, 6, 800);
    
    // Edges for "Houston"
    mainGraph.addEdge(6, 5, 800);

    // Print the graph
    mainGraph.printGraph();
}
