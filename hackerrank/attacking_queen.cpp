#include<iostream>
#include<iomanip>
#define N 100000
#include<vector>
using namespace std;
long long count_square(long long n,int queen[][1000],long long row,long long  col){
     int x=row-1,y=col-1;
     x--;
     y++;
     int count=0;
     while(x>=0 && y<n){
           if(queen[x][y]==-1)
               break;
           else
              count++;
           x--;
           y++;
     }
     x=row-1;y=col-1;
     x--;y--;
     while(x>=0 && y>=0){
          if(queen[x][y]==-1)
              break;
          else
             count++;
          x--;y--;
     }
     x=row-1;y=col-1;
     x++;y++;
     while(x<n && y<n){
         if(queen[x][y]==-1)
             break;
         else
            count++;
         x++;y++;
     }
     x=row-1;y=col-1;
     x++;y--;
     while(x<n && y>=0){
         if(queen[x][y]==-1){
              break;
         }
         else
             count++;
        x++;y--;
     }
     x=row-1;y=col-1;
     y++;
     while(y<n){
         if(queen[x][y]==-1)
             break;
         else
            count++;
         y++;
     }
     x=row-1,y=col-1;
     y--;
     while(y>=0){
          if(queen[x][y]==-1)
             break;
         else
            count++;
         y--;
     }
     x=row-1;y=col-1;
     x++;
     while(x<n){
         if(queen[x][y]==-1)
             break;
         else
            count++;
         x++;
     }

     x=row-1;
     x--;
     while(x>=0){
          if(queen[x][y]==-1)
             break;
         else
            count++;
         x--;
     }
     return count;

}
int main(){
    long long  n;
    cin>>n;
    int queen[1000][1000];
    long long  k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<setw(3)<<queen[i][j]<<" ";
        cout<<endl;
    }
    cin>>k;

    int row1,col1;
    cin>>row1>>col1;
    long long  row,col;
    queen[row1-1][col1-1]=1;
    for(int i=0;i<k;i++){
        cin>>row>>col;
        queen[row-1][col-1]=-1;
    }
     long long  ans=count_square(n,queen,row1,col1);
     cout<<ans<<endl;
}
