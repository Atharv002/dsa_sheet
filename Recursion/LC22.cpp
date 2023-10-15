//LeetCode Question 22

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr="";
        gen(ans,n,n,curr);
        return ans;
    }
    void gen(vector<string> &ans, int open, int close, string curr){
        if(open==0 and close==0){ans.push_back(curr);return;}
        if(open>0){gen(ans,open-1,close,curr+"(");}
        if(open<close){gen(ans,open,close-1,curr+")");}
        return ;
    }
};