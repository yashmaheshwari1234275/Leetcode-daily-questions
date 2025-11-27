class Solution {
public:
    int reverse(int x) {
        string ans = to_string(x);   // fix: convert int → string
        string an = "";
        bool ya = false;

        if(ans[0] == '-') {
            ya = true;
        }
        for(int i = ans.size() - 1; i >= (ya ? 1 : 0); i--) {
            an += ans[i];
        }

        if(ans[ans.size() - 1] != '0') {
            
        }

        if(ya) an = "-" + an;

        // convert back safely
        long long num = stoll(an);
        if(num < INT_MIN || num > INT_MAX) return 0;

        return (int)num;
    }
};
