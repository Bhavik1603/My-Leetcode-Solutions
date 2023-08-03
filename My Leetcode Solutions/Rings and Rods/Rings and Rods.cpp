// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    int countPoints(string rings) {
        int arr[10][3] = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}};
        for(int i = 1; i < rings.size(); i+=2)
        {
            int x = rings[i] - 48;
            cout << x << " ";
            if(rings[i-1] == 'R' && arr[x][0] == 0)
            {
                arr[x][0]++;
            }
            if(rings[i-1] == 'G' && arr[x][1] == 0)
            {
                arr[x][1]++;
            }
            if(rings[i-1] == 'B' && arr[x][2] == 0)
            {
                arr[x][2]++;
            }
        }
        int res = 0;
        for(int i = 0; i < 10; i++)
        {
            if(arr[i][0] + arr[i][1] + arr[i][2] == 3) res++;
            cout << arr[i][0] + arr[i][1] + arr[i][2] << endl;
        }
        return res;
    }
};