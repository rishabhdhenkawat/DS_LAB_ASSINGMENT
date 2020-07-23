#include <bits/stdc++.h> 
using namespace std; 

void insertEdge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest);  
} 

void display(vector<int> adj[], int v) 
{ 
    for (int i = 0; i < v; i++) { 
        cout << i << "--> "; 
        for (int j = 0; j < adj[i].size(); j++) 
            cout << adj[i][j] << "  "; 
        cout << "\n"; 
    } 
} 

void transpose(vector<int> adj[],  
                     vector<int> transpose[], int v) 
{ 
    
    for (int i = 0; i < v; i++) 
        for (int j = 0; j < adj[i].size(); j++) 
            insertEdge(transpose, adj[i][j], i); 
} 
  
int main() 
{ 
    int v = 5; 
    vector<int> adj[v];
    int n; 
   cin>>n;
    int a,b; 
   for(int i=0;i<n;i++)
  {
   cin>>a>>b;
  insertEdge(adj, a, b); 
  }
   
   
    vector<int> transpose[v]; 
    transpose(adj, transpose, v); 
    display(transpose, v); 
  
    return 0; 
} 