class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty() || board[0].empty()) return false;
        vector<vector<bool>> used(board.size(), vector<bool>(board[0].size(),false));     
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++) {
                bool result = search(board, word, i, j, used, 0); 
                if (result) return true;
            }               
        }
        return false;
    }
     
    bool search(vector<vector<char>>& board, string &word, int i, int j, vector<vector<bool>>& used, int index) {
        if(index == word.size()) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index] || used[i][j]) return false;
        used[i][j] = true;
        if(search(board, word, i, j - 1, used, index + 1)) return true;
        if(search(board, word, i, j + 1, used, index + 1)) return true;                            
        if(search(board, word, i - 1, j, used, index + 1)) return true;
        if(search(board, word, i + 1, j, used, index + 1)) return true;
        used[i][j] = false;
        return false;        
    }
};
