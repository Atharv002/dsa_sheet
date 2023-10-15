//LeetCode Question 39

class Solution {
public:
    vector<vector<int>> ans;
    void gen(vector<int> candidates, vector<int> curr, int target, int pos){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(target<0){return;}
        if (pos==candidates.size()){return;}
        gen(candidates,curr,target,pos+1);
        curr.push_back(candidates[pos]);
        gen(candidates,curr,target-candidates[pos],pos);
        curr.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        gen(candidates,curr,target,0);
        return ans;
    }
};