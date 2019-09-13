#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
        map<int,list<int>>adjList;
    void addEdge(int u,int v){
        adjList[u].push_back(v);
    }
    int bfs(int src){
         map<int,bool>visited;
         queue<int>q;
         int v;
         q.push(src);
         visited[src]=true;
         while(!q.empty()){
               int node=q.front();
               q.pop();
               for(int neighbour:adjList[node]){
                    v=neighbour;
                    if(!visited[neighbour]){
                        visited[neighbour]=true;
                        q.push(neighbour);
                    }
               }
         }
         return v;
    }

};
int main(){
    int n;
    cin>>n;
    Graph g;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        g.addEdge(i,num);
    }
    for(int i=1;i<=n;i++){
        cout<<g.bfs(i)<<" ";
    }
}
