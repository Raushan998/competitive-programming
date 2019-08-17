#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;
class Graph{
     public:
         map<long long,list<long long>>adjList;
         Graph(){
         }
         void addEdge(long long  U,int V,bool bidir=false){
              adjList[U].push_back(V);
              if(bidir==true){
                   adjList[V].push_back(V);
              }
         }
         bool bfs(int t,int src,int n){
               map<long long ,bool>visited;
               queue<long long>q;
               q.push(src);
               for(int i=1;i<n+1;i++){
                    visited[i]=false;
               }
               visited[src]=true;
               q.push(src);
               while(!q.empty()){
               int node=q.front();
               //cout<<q.front()<<" ";
               q.pop();
               for(int neighbour:adjList[node]){
                          if(!visited[neighbour]){
                                visited[neighbour]=true;
                                q.push(neighbour);
                          }

                    }
              }
               for(auto it:visited){
                 if(it.first==t && it.second==1){
                      return true;
                 }

               }
               return false;
         }
};
int main(){
    Graph g;
    long long  n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int p=0;
    for(long long i=1;i<n;i++){
         g.addEdge(i,i+arr[p]);
         p+=1;
    }
    if(g.bfs(t,arr[0],n)){
         cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
return 0;
}
