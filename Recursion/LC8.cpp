//LeetCode Question 8

class Solution {
public:
    int myAtoi(string s) {
        double ans=0.0;
        bool isnegative=false;
        bool set=false;
        for(int i=0;i<s.length();i++){
            int temp=int(s[i])-48;
            if(temp==-3 and ans==0.0 and set==false){set=true;isnegative=true;}
            else if(temp==-16 and set==false){continue;}
            else if(temp==-5 and set==false){set=true;}
            else if(temp>=0 and temp<=9){
                if(-1*ans<INT_MIN){break;}
                else{
                    set=true;
                    ans=ans*10;
                    ans+=temp;
                }
            }
            else{break;}
        }
        if(isnegative){ans*=-1;}
        if(ans>INT_MAX){return INT_MAX;}
        if(ans<INT_MIN){return INT_MIN;}
        return int(ans);
        
    }
};