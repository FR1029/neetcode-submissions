class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char current = board[i][j];
                if (current == '.') continue;
                string row_str = string(1, current) + " in row " + to_string(i);
                string col_str = string(1, current) + " in col " + to_string(j);
                string box_str = string(1, current) + " in box " + to_string(i / 3) + "-" + to_string(j / 3);
                if (seen.count(row_str) || seen.count(col_str) || seen.count(box_str)) {
                    return false;
                }
                seen.insert(row_str);
                seen.insert(col_str);
                seen.insert(box_str);
            }
        }
        return true;
    }
};
