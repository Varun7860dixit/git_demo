#include <iostream>
#include<queue>
using namespace std;
#define MAX 100
void BFS(int graph[MAX][MAX],int visited[MAX],int V,int start){
    queue<int> q;
    visited[start] = 1;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<V;i++){
            if(graph[node][i]==1 && !visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}
int main() {
    int V,E;
    cin>>V>>E;
    int graph[MAX][MAX] = {0};
    int visited[MAX] = {0};
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v] = 1;
    }
    BFS(graph,visited,V,0);
    return 0;
}