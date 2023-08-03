// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstNum = 0;
        for(int i = 0; i < firstWord.size(); i++)
        {
            firstNum = firstNum*10 + (firstWord[i]-97);
        }
        int secondNum = 0;
        for(int i = 0; i < secondWord.size(); i++)
        {
            secondNum = secondNum*10 + (secondWord[i]-97);
        }
        int targetNum = 0;
        for(int i = 0; i < targetWord.size(); i++)
        {
            targetNum = targetNum*10 + (targetWord[i]-97);
        }
        cout << firstNum << endl;
        cout << secondNum << endl;
        cout<< targetNum <<endl;
        if(firstNum + secondNum == targetNum) return true;
        return false;
    }
};