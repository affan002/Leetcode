class Solution {
public:
    

    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, unordered_set<char>> rowMap, colMap;
        map<pair<int,int>, unordered_set<char>> gridMap;

        for (int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                if (board[r][c] == '.') continue;

                pair<int,int> currPair = {r/3,c/3};

                if (rowMap[r].count(board[r][c]) || 
                colMap[c].count(board[r][c]) ||
                gridMap[currPair].count(board[r][c])) return false;


                rowMap[r].insert(board[r][c]);
                colMap[c].insert(board[r][c]);
                gridMap[currPair].insert(board[r][c]);
            }
        }
        return true;
    }
};