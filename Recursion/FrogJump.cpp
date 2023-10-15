//Frog Jump Question

class Solution {
public:
    int climb(int n,vector<int> &steps){
        if(steps[n]>-1){return steps[n];}
        steps[n]=climb(n-1,steps)+climb(n-2,steps);
        return steps[n];
    }
    int climbStairs(int n) {
        vector<int> steps(n+1,-1);
        steps[0]=steps[1]=1;
        return climb(n,steps);
    }
};