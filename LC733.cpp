//Leet Code 733 Flood Fill

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int n=image.size();
        int m=image[0].size();
        int dat=image[sr][sc];
        if(dat==color){return image;}
        
        q.push({sr,sc});
        image[sr][sc]=color;
        
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            vector<int> nrow={0,-1,0,1};
            vector<int> ncol={-1,0,1,0};
            for(int i=0;i<4;i++){
                int nr=r+nrow[i];
                int nc=c+ncol[i];
                if(nr>=0 and nc>=0 and nr<n and nc<m and image[nr][nc]==dat){
                    image[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
            q.pop();
        }
        return image;
    }
};