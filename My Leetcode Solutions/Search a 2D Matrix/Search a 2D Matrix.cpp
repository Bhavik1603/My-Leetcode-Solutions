// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() - 1;
        int mid;
        int n = matrix[0].size();
        while(low <= high)
        {
            mid = (low + high)/ 2;
            if(matrix[mid][0] <= target && target <= matrix[mid][n-1])
            {
                int ll = 0;
                int hh = n - 1;
                int mm;
                while(ll <= hh)
                {
                    mm = (ll+hh)/2;
                    if(matrix[mid][mm]==target) return true;
                    else if(matrix[mid][mm]<target) ll = mm + 1;
                    else hh = mm - 1;
                }
                return false;
                
            }
            else if (matrix[mid][n-1] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};