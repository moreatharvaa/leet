class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int max_freq = 0;
        int i = 0;
        // int n = answerKey.length();
        unordered_map<char,int>charcount;

        for(int j=0; j<answerKey.length(); j++){
            char currentChar = answerKey[j];
            charcount[currentChar]++;
            max_freq = max(max_freq, charcount[currentChar]);


            if(j - i + 1> max_freq + k){
                charcount[answerKey[i]]--;
                i++;
            }
        }
        return answerKey.length() - i;
        
    }
};
