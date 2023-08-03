// https://leetcode.com/problems/sum-of-all-odd-length-subarrays

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int k=1;k<=arr.size();k+=2)
        {
            for(int i=0;i<=arr.size()-k;i++)
            {
                for(int j=i;j<i+k;j++)
                {
                    sum+=arr[j];
                }
            }
        }
        
        return sum;
    }
};