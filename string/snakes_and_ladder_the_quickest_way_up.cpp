#include<bits/stdc++.h>
using namespace std;
class Graph{
       public:
           map<int,list<int>>adjList;
       void addEdge(int u,int v){
            adjList[u].push_back(v);
       }
       void bfs(int src,int dest){
            map<int,bool>visited;
            queue<int>q;
          //  map<int,int>parent;
            map<int,int>dist;
            for(auto i:adjList){
                dist[i.first]=INT_MAX;
            }
            //parent[src]=src;
            q.push(src);
            dist[src]=src;
            visited[src]=true;
            while(!q.empty()){
                 int node=q.front();
                 q.pop();
                 for(int neighbour:adjList[node]){
                     if(!visited[neighbour]){
                         q.push(neighbour);
                        // parent[neighbour]=node;
                         dist[neighbour]=dist[node]+1;
                     }
                 }
            }
            cout<<dist[dest]<<endl;
       }
};
int main(){
   int t;
   cin>>t;
   while(t--){
       Graph g;
       int board[150]={0};
       int l,s;
       cin>>l;
       for(int i=0;i<l;i++){
            int num1,num2;
            cin>>num1>>num2;
            board[num1]=num2;
       }
       cin>>s;
       for(int i=0;i<s;i++){
           int num1,num2;
           cin>>num1>>num2;
           board[num1]=-num2;
       }
       for(int u=0;u<=100;u++){
            for(int dice=1;dice<=6;dice++){
                 int v=u+dice+board[u+dice];
                 g.addEdge(u,v);
            }
       }
       g.bfs(1,100);
   }
   return 0;
}
