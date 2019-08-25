#include<iostream>
#include<map>
#include<queue>
#include<stack>
#include<list>
using namespace std;
class Graph{
    public:
        map<int,list<int>>adjList;
        map<int,int>parent;
        void addEdge(int u,int v){
             adjList[u].push_back(v);
             adjList[v].push_back(u);
        }
        void bfs(int src,map<int,int>&p,int &count){
             queue<int>q;
             map<int,bool>visited;
             parent[src]=src;
             visited[src]=true;
             q.push(src);
             while(!q.empty()){
                 int node=q.front();
                 q.pop();
                 for(int neighbour:adjList[node]){
                      if(!visited[neighbour]){
                           visited[neighbour]=true;
                           parent[neighbour]=node;
                      }
                 }
             }

             for(auto neighbour=parent.begin();neighbour!=parent.end();neighbour++){
                   for(auto neighbour1:p){
                        if(neighbour1.first==neighbour->first && neighbour1.second==neighbour->second){
                             count++;
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
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++){
             int num1,num2;
             cin>>num1>>num2;
             g.addEdge(num1,num2);
        }
        int count=0;
        int l,k;
        cin>>l>>k;
        map<int,int>p;
        for(int i=0;i<l;i++){
              int num1,num2;
              cin>>num1>>num2;
              p[num2]=num1;
        }
        for(int i=1;i<=n;i++){
             g.bfs(i,p,count);
        }
        cout<<count<<endl;
    }
}
