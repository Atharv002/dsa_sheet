//Leet Code 547 Number of Provinces

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n+1,0);
        int prov=0;
        for(int i=0;i<n;i++){
            if(vis[i]){continue;}
            else{
                prov++;
                dfs(isConnected,vis,i);
            }
        }
        return prov;
    }
    void dfs(vector<vector<int>> &isConnected, vector<int> &vis, int node){
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1){if(!vis[i]){vis[i]=1;dfs(isConnected,vis,i);}}
        }
        return;
    }
};