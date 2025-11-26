class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string st=strs[i];
            sort(st.begin(),st.end());
            ans[st].push_back(strs[i]);
        }
        vector<vector<string>>as;
        for(auto in :ans){
            as.push_back(in.second);
        }
        return as;
    }
};