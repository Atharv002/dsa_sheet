//LeetCode Question 78

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        gen(ans,curr,nums,0,nums.size()-1);
        return ans;
    }
    void gen(vector<vector<int>> &ans, vector<int> curr,vector<int> &nums,int pos, int mx){
        if(pos==mx){
            ans.push_back(curr);
            curr.push_back(nums[pos]);
            ans.push_back(curr);
            return;
        }
        gen(ans,curr,nums,pos+1,mx);
        curr.push_back(nums[pos]);
        gen(ans,curr,nums,pos+1,mx);
        return;
    }
};