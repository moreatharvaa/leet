class Solution {
public:
    int minOperations(string s) {
        int countFor0 = 0;
        int countFor1 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    countFor1++;
                } else {
                    countFor0++;
                }
            } else {
                if (s[i] == '1') {
                    countFor1++;
                } else {
                    countFor0++;
                }
            }
        }
        
        return min(countFor0, countFor1);
    }
};
