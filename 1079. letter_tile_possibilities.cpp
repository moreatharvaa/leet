// C++
// Intuition
// start with an empty string
// adding each tile
// using recursion
// adding it into a result set
// backtracking
// Approach
// Using simple backtracking technique, by travesing each character
// storing it in the result
// then, adding a new character to the existing result
// then backtracking, using the same technique
// counting and returning the number of combinations carried away.
// Complexity
// Time complexity:
// O(n!)

// Space complexity:
// O(n*n!)

Code
class Solution {
public:
    void solve(string& tiles, vector<bool>& used, unordered_set<string>& result, string &current) {
        result.insert(current);

        for (int i = 0; i < tiles.length(); i++) {
            if (used[i]) {
                continue;
            }
            current.push_back(tiles[i]);
            used[i] = true;

            solve(tiles, used, result, current);

            used[i] = false;
            current.pop_back();
        }
    }

    int numTilePossibilities(string tiles) {
        int n = tiles.length();

        vector<bool> used(n, false);
        unordered_set<string> result;

        string current = "";

        solve(tiles, used, result, current);

        return result.size() - 1;
    }
};
