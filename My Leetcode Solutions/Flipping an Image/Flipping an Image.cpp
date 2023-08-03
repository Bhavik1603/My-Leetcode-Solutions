// https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(image[i][j]==1) image[i][j]=0;
                else image[i][j]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp = image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
        }
        return image;
    }
};