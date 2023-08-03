// https://leetcode.com/problems/spiral-matrix-iv

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
            vector<vector<int>> matrix(m, vector<int>(n,-1));
			ListNode* currentNode = head;
            int i, j;
			int minRow = 0;
			int minCol = 0;
			int maxRow = m-1;
			int maxCol = n-1;
			while(currentNode != NULL)
            {
				for(j = minCol; j <= maxCol && currentNode != NULL; j++)
                {
					i = minRow;
					matrix[i][j] = currentNode->val;
					currentNode = currentNode->next;
				}
				minRow++;
				for(i = minRow; i <= maxRow && currentNode != NULL; i++)
                {
					j = maxCol;
					matrix[i][j] = currentNode->val;
					currentNode = currentNode->next;
				}
				maxCol--;
				for(j = maxCol; j >= minCol && currentNode != NULL; j--)
                {
					i = maxRow;
					matrix[i][j] = currentNode->val;
					currentNode = currentNode->next;
				}
				maxRow--;
				for(i = maxRow; i >= minRow && currentNode != NULL; i--)
                {
					j = minCol;
					matrix[i][j] = currentNode->val;
					currentNode = currentNode->next;
				}
				minCol++;
			}
        return matrix;
    }
};