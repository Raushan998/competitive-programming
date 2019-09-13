#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   map<int,list<int>>adjList;
   Graph(){
   }
    void addEdge(int u,int v){

          adjList[u].push_back(v);
          adjList[v].push_back(u);
    }
    void bfs(int src,map<int,int>&node1,int w){
          //map<int,int>node1;
          map<int,bool>visited;
          queue<int>q;
          q.push(src);
          node1[src]=0;
          visited[src]=true;
          int count1=0;
          map<int,int>parent;
          parent[src]=0;
          while(!q.empty()){
               int node=q.front();
               q.pop();
              for(auto neighbour:adjList[node]){
                     if(!visited[neighbour]){
                            visited[neighbour]=true;
                            q.push(neighbour);
                            node1[neighbour]=parent[node]+w;
                            parent[neighbour]=parent[node]+w;
                            count1=w;
                       }
               }
           }
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
         Graph g;
         int vertex,edge,w=6;
         cin>>vertex>>edge;
         map<int,int>node1;
         for(int i=0;i<edge;i++){
              int num1,num2;
              cin>>num1>>num2;
              g.addEdge(num1,num2);
         }
       //  map<int,int>node;
       for(int i=1;i<=vertex;i++){
              node1[i]=-1;
       }
         int src;
         cin>>src;
         g.bfs(src,node1,w);
         for(auto it=node1.begin();it!=node1.end();it++){
              if(it->second!=0){
                   cout<<it->second<<" ";
              }
         }
         cout<<endl;
    }
}
