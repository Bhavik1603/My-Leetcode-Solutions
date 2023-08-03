// https://leetcode.com/problems/reducing-dishes

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int sum=0;
        for(int i=0;i<satisfaction.size();i++){
            int x=1,s=0;
            for(int j=i;j<satisfaction.size();j++){
                s+=satisfaction[j]*(x++);
            }
            sum=max(s,sum);
        }
        return sum;
    }
};