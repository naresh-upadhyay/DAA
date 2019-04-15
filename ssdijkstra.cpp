#include<bits/stdc++.h>
#define V 7
int minDistance(int dist[], bool check[]) { 
   int minv = INT_MAX, p; 
   for (int v = 0; v < V; v++) 
     if (check[v] == false && dist[v] < minv) 
         minv = dist[v], p = v; 
   return p; 
} 
void printGraph(int darr[]){
    printf("vertex \t and \tdistances\n");
    for (int i=0;i<V;i++){
        printf("%c\t\t%d\n",i+'A',darr[i]);
    }
}
void dijkstra(int graph[V][V],int src){
    int dist[V],mdp=0;
    bool check[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        check[i]=false;
    }
    dist[src]=0;
    for(int i=0;i<V-1;i++){
        mdp=minDistance(dist,check);
        check[mdp]=true;
        for(int j=0;j<V;j++){
            if(graph[mdp][j] && !check[j] && dist[mdp]!=INT_MAX && dist[mdp]+graph[mdp][j]<dist[j]){
                dist[j]=dist[mdp]+graph[mdp][j];
            }
        }
    }
    printGraph(dist);

}
int main() { 
int graph[V][V] =  {{0, 5, 4, 0, 0,0,0}, 
					{5, 0, 3, 4, 7,0,0}, 
					{4, 3, 0, 2, 0,6,0}, 
					{0, 4, 2, 0, 5,1,0}, 
					{0, 7, 0, 5, 0,0,6}, 
					{0, 0, 6, 1, 0,0,7}, 
					{0, 0, 0, 0, 6,7,0}}; 
	dijkstra(graph,2); 

	return 0; 
} 
