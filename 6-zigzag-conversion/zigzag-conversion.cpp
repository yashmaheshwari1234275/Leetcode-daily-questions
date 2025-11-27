class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows) return s;

        string result;
        int jump = 2 * (numRows - 1);

        for (int i = 0; i < numRows; ++i) {
            for (int j = i; j < s.size(); j += jump) {
                result += s[j];

                int diagonal = j + jump - 2 * i;
                if (i > 0 && i < numRows - 1 && diagonal < s.size()) {
                    result += s[diagonal];
                }
            }
        }

        return result;
    }
};