# Graph-Project
This project is a assignment for course ECCS2681 - DSA 2. The goal for this project is to write code that Stores graph information in bot ha adjacency matrix and adjacency list. This is a relatively simple project that will help me understand how to work with graphs in C++, and improve my skills with data structures and algorithms.

# Commit 1: 

## Implemented v 1.0.0 of the "Graph" class
The creation of the "Graph" class gives us 2 instantaneous variables and 3 functions.

 Instance Variables:
 - numVertices: Number of vertices in the graph
 - adjLists: A vector of lists that will store the adjacency list for each vertex
 
 Methods:
 - Graph(int vertices): Constructor that initializes the number of vertices and resizes the adjLists vector
 - addEdge(int src, int dest): Function to add an edge to the graph
 - printGraph(): Function to print the graph

# Commit 2:

## Implemented v 1.1.0 of the "Graph" class
This updated version of the "Graph" class adds one instantaneous variable and a function.

Instance Variable:
- verticeNames: A hash map that will store the name of each vertex

Methods:
- setNodeName(int node, string name): Function to set the name of a node