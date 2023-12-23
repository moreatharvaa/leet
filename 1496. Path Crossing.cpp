class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> st;
        
        int x = 0;
        int y = 0;
        string key = to_string(x) + "_" + to_string(y);
        st.insert(key);
        
        for(char &ch : path) {
            if(ch == 'E') {
                x += 1; // moving right
            } else if(ch == 'W') {
                x -= 1; // moving left
            } else if(ch == 'N') {
                y += 1; // moving upwards
            } else {
                y -= 1; // moving downwards
            }
            
            key = to_string(x) + "_" + to_string(y);
            if(st.find(key) != st.end()) {
                return true;
            }
            
            st.insert(key);
        }
        
        return false;
    }
};

