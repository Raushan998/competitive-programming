#include<bits/stdc++.h>
using namespace std;

int k;
bool visited[10020];

class no{
    public:
    int p,t;
    no(int a,int b){
        p = a;
        t = b ;
    }
};

int bfs(int x,int y){

    queue<no>q;
    q.push(no(x,0));

    while(!q.empty()){
        no z = q.front();
        q.pop();

        int xx = z.p;
        int t = z.t;
        visited[xx]=true;

        if(xx==y) return t;
        else{
            if(xx*2==y) return t+1;
            else if(xx*2<y+11 && visited[xx*2]==false)q.push(no(xx * 2,t+1));

            if(xx-1==y ) return t+1;
            else if(xx-1>=0 && visited[xx-1]==false)q.push(no(xx - 1,t+1));
        }
    }

    return 0;

}

int main(){

    int n,m;

    cin>>n>>m;

    k=bfs(n,m);

    cout<<k<<"\n";

}
