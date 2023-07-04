class Solution {
public:
    bool solve(int ind, int row, int col, vector<vector<char>> &board, string word, vector<vector<int>> &visited)
{


        int n = board.size();
        int m = board[0].size();

        int rr[] = {-1, 0, 1, 0};
        int cc[] = {0,1, 0, -1};
        
        if (ind ==word.size()){
            return true;
        }
        visited[row][col] = 1;
        for(int i=0; i<4;i++){
            int r = row + rr[i];
            int c = col + cc[i];

            if (r < n and r>=0 and c < m and  c>=0 and !visited[r][c] and word[ind] == board[r][c])
            {
                if (solve(ind + 1, r, c, board, word, visited) == true){
                    return true;
                }
            }
        }
        visited[row][col] = 0;
        return false;
    }

bool exist(vector<vector<char>> &board, string word){
    int n = board.size();
    int m = board[0].size();


    vector<vector<int>> visited(n, vector<int>(m, 0));

    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(board[i][j] == word[0]){
                bool ans = solve(1, i, j, board, word, visited);
                if(ans)
                {
                    return ans;
                }
            }
        }
    }
    return false;








}












};
