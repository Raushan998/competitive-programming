#include<iostream>
#include<algorithm>
using namespace std;
class Edge{
  public:
    int src;
    int dest;
    int weight;
};
class set1{
    public:
       int rank;
       int parent;
};
int Find(set1* Set,int i){
      if(Set[i].parent!=i){
           Find(Set,Set[i].parent);
      }
      return Set[i].parent;
}
void Union(set1* Set,int v1,int v2){
      int v1_root=Find(Set,v1);
      int v2_root=Find(Set,v2);
      if(Set[v1_root].rank>Set[v2_root].rank){
            Set[v2_root].parent=v2_root;
      }
      else if(Set[v1_root].rank<Set[v2_root].rank){
            Set[v1_root].parent=v2_root;
      }
      else{
           Set[v2_root].parent=v1_root;
           Set[v1_root].rank++;
      }
}

bool mycmp(Edge e1,Edge e2){
     return(e1.weight<e2.weight);
}
void kruskal(Edge* input,int n,int e){
     sort(input,input+e,mycmp);
     set1* Set=new set1 [n];
     for(int i=0;i<n;i++){
          Set[i].parent=i;
          Set[i].rank=0;
     }
     Edge* output=new Edge[n-1];
     int counter=0,i=0;
     while(counter<n-1){
          Edge currentedge=input[i];
          int sourceparent=Find(Set,currentedge.src);
          int destinationparent=Find(Set,currentedge.dest);
          if(sourceparent!=destinationparent){
              output[counter]=currentedge;
              Union(Set,sourceparent,destinationparent);
              counter++;
          }
          i++;
     }
     int weight1=0;
     for(int m=0;m<n-1;m++){
          weight1+=output[m].weight;
     }
     cout<<weight1<<endl;
}
int main(){
     int n,e;
     cin>>n>>e;
     Edge *input=new Edge[e];
     for(int i=0;i<e;i++){
          int s,d,w;
          cin>>s>>d>>w;
          input[i].src=s;
          input[i].dest=d;
          input[i].weight=w;
     }
     kruskal(input,n,e);
     return 0;
}
