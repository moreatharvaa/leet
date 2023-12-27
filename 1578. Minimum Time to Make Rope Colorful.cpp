// approch

// 1. previous mai max --> updated
// 2. time --> min(prev, curr)

// prev = max(prev, curr)
// time += min(prev, curr) 

// Greedy Intuition

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();

        int time = 0;
        int prevmax = 0;

        for(int i=0; i<n;i++){

            if(i>0 && colors[i]!=colors[i-1]){
                prevmax = 0;
            }

            int current = neededTime[i];

            time += min(prevmax, current); //greedilyy

            prevmax = max(prevmax, current);
        }

        return time;
        
    }
};
