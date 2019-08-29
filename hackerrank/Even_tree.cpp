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
   int dfshelper(int &res,map<int,bool>&visited,int node){
        visited[node]=true;
        int current_component=0;
        for(int neighbour:adjList[node]){
             if(!visited[neighbour]){
                   int subtreecount=dfshelper(res,visited,neighbour);
                   if(subtreecount%2==0){
                       res++;
                   }
                   else{
                        current_component+=subtreecount;
                   }
             }
        }
        return current_component+1;
   }
   void dfs(int src){
      int res=0;
      map<int,bool>visited;
      dfshelper(res,visited,src);
      cout<<res<<endl;
   }
};
int main(){
         Graph g;
         int vertex,edge,w=6;
         cin>>vertex>>edge;
         for(int i=0;i<edge;i++){
              int num1,num2;
              cin>>num1>>num2;
              g.addEdge(num1,num2);
         }
         g.dfs(1);
         return 0;
}
