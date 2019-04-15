#include<bits/stdc++.h> 
using namespace std; 
enum color{white,gray,black};
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	//adj[v].push_back(u); 
} 

bool DFSUtil(int u, vector<int> adj[], 
					vector<int> &visited) 
{ 
	visited[u] = gray; 
	//cout << u << " "; 
	for (int i=0; i<adj[u].size(); i++){
		if (visited[adj[u][i]] == white && DFSUtil(adj[u][i], adj, visited)) 
			return true;
        else if(visited[adj[u][i]]==gray)
            return true;

    } 
    visited[u]=black;
    return false;
} 
bool DFS(vector<int> adj[], int V) 
{ 
	vector<int> visited(V, white); 
	for (int u=0; u<V; u++) 
		if (visited[u] == white) 
		    return DFSUtil(0, adj, visited); 
} 

int main() 
{ 
	int V = 4; 
	vector<int> adj[V]; 

    addEdge(adj,0, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 0); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 3); 
	if(DFS(adj, V))
        cout<<" cycle present \n";
    else
        cout << " no cycle \n"; 

	return 0; 
} 
