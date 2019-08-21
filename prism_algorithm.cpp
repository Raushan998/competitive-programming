#include<iostream>
#include<list>
#include<climits>
#include<map>
using namespace std;
class Graph{
    public:
       int v;
       map<int,list<pair<int,int>>>adj;
       Graph(){
       }
       void addEdge(int u,int v,int w){
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
       }
       int findMinVertex(int *weight,bool *visited,int v){
            int minVertex=-1;
            for(int i=0;i<v;i++){
                 if(!visited[i] && (minVertex==-1 || weight[i]<weight[minVertex])){
                      minVertex=i;
                 }
            }
            return minVertex;
       }
       void prism(int src){
           bool *visited=new bool[v];
           int *parent=new int[v];
           int *weight=new int[v];
           for(int i=0;i<v;i++){
                 weight[i]=INT_MAX;
                 visited[i]=false;
           }
           parent[src]=-1;
           weight[src]=0;
           for(int i=0;i<v;i++){
                 int minIndex=findMinVertex(weight,visited,v);
                 visited[minIndex]=true;
                 for(auto neighbour:adj[minIndex]){

                       if(!visited[neighbour.first] && weight[neighbour.first]>neighbour.second){
                             parent[neighbour.first]=minIndex;
                             weight[neighbour.first]=neighbour.second;
                       }
                 }
           }
           int weight1=0;
           for(int i=0;i<v;i++){
                  weight1+=weight[i];
           }
           cout<<weight1<<endl;
       }
};
int main(int argc,char const*argv[]){
     int n,e;
     cin>>n>>e;
     Graph g;
     for(int i=0;i<e;i++){
          int u,v,w;
          cin>>u>>v>>w;
          g.addEdge(v,u,w);
     }
     int src;
     cin>>src;
     //cout<<"hello world!"<<endl;
     g.prism(src);
     return 0;
}
