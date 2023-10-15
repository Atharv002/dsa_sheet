//Leet Code 994 Rotting Oranges


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();  //number of rows
        int m=grid[0].size();  //number of cols
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        int tm=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            vector<int> nrow={-1,0,1,0};
            vector<int> ncol={0,-1,0,1};
            for(int i=0;i<4;i++){
                int nr=r+nrow[i];
                int nc=c+ncol[i];
                if( nr>=0 and nc>=0 and nr<n and nc<m and grid[nr][nc]==1 ){
                    q.push({{nr,nc},t+1});
                    grid[nr][nc]=2;
                }
            }
            q.pop();
            tm=t;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
        
    }
};