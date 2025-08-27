class Solution {
public:
    

    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,vector<char>> rowMap;
        unordered_map<int,vector<char>> colMap;
        map<pair<int,int>, vector<char>> gridMap;

        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {

                // check if the element exists in rowMap
                if (count(rowMap[i].begin(), rowMap[i].end(), board[i][j]) > 0) return false;
                else if (board[i][j] != '.') rowMap[i].push_back(board[i][j]);

                // check if the element exists in colMap
                if (count(colMap[j].begin(), colMap[j].end(), board[i][j]) > 0) return false;
                else if (board[i][j]!='.') colMap[j].push_back(board[i][j]);


                // check for the gridMap
                if (count(gridMap[{i/3, j/3}].begin(), gridMap[{i/3, j/3}].end(), board[i][j]) > 0) return false;
                else if (board[i][j] != '.') gridMap[{i/3, j/3}].push_back(board[i][j]);
            }
        }

        return true;
    }
};