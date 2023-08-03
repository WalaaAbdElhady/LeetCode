class Solution {
    vector<string> mp = {"", "", "abc", "def", "ghi","jkl", "mno","pqrs", "tuv", "wxyz"};
    vector<string>ans;
    string tmp;
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return ans;
        solve(0,digits);
        return ans;
    }
    void solve(int i,string digits){
        if(tmp.size()==digits.size()){
            ans.push_back(tmp);
            return;
        }
        string val=mp[digits[i]-'0'];
        for(int j=0;j<val.size();j++){
            tmp+=val[j];
            solve(i+1,digits);
            tmp.pop_back();
        }
    }
};