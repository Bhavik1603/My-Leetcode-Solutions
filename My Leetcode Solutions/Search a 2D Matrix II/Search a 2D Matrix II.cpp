// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int a,b,mid;
        for(int i=0; i<matrix.size(); i++)
        {
            if(target>= matrix[i][0] && target<=matrix[i][matrix[i].size()-1])
            {
                a=0;
                b=matrix[i].size()-1;
                while(a<=b)
                {
                    mid=(a+b)/2;
                    if(target==matrix[i][mid])
                    {
                        return true;
                    }
                    else if(target<matrix[i][mid])
                    {
                        b=mid-1;
                    }
                    else if(target>matrix[i][mid])
                    {
                        a=mid+1;
                    }
                }
            }
            else if(target<matrix[i][0]) return false;
        }
        return false;
    }
};