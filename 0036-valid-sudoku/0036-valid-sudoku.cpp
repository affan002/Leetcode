class Solution {
public:
    

    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, unordered_set<int>> rowMap, colMap;
        map<pair<int,int>, unordered_set<int>> gridMap;

        for (int row= 0; row<9; row++) {
            for (int col=0; col<9; col++) {
                pair<int,int> currCell = {row/3, col/3};
                int currElement = board[row][col];
                if (currElement == '.') continue;
                else if (rowMap[row].count(currElement)==1 || colMap[col].count(currElement)==1 || gridMap[currCell].count(currElement)==1) {
                    return false;
                }
                rowMap[row].insert(currElement);
                colMap[col].insert(currElement);
                gridMap[currCell].insert(currElement);
            }
        }

        return true;
    }
};