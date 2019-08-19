#include<bits/stdc++.h>
using namespace std;
long node;
class Graph{
     public:
        map<int,list<int>>adjList;
        Graph(){

        }
        void addEdge(int u,int v){
            adjList[u].push_back(v);
        }
        void dfshelper(int neighbour,map<int,bool>&visited){
               visited[neighbour]=true;
               node++;
               for(int j:adjList[neighbour]){
                     if(!visited[j])
                          dfshelper(j,visited);
               }
        }
        void dfs(int src,int x,int y){
             map<int,bool>visited;
             long cost=0;
             for(auto neighbour:adjList){
                 node=0;
                 if(!visited[neighbour.first]){
                       dfshelper(neighbour.first,visited);
                        cost=cost+x;
                         if(x>y){
                         cost=cost+(y*(node-1));
                         }
                        else{
                             cost=cost+x*(node-1);
                        }
                   }

             }
             cout<<cost<<endl;
        }
};
int main(){
    int t;
    cin>>t;
    while(t--){
    Graph g;
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    for(int i=0;i<n;i++){
          int m1,m2;
          cin>>m1>>m2;
          g.addEdge(m1,m2);
    }
    g.dfs(1,x,y);
   }
    return 0;
}
