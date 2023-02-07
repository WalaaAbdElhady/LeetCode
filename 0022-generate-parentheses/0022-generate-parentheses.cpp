class Solution {
private:
    vector<string>ans;
public:
    vector<string> generateParenthesis(int n) {
        solve(n,"",0,0);
        return ans;
    }
    void solve(int n,string tmp,int open,int close){
        if(tmp.size()==2*n){
            ans.push_back(tmp);
            return;
        }
        if(open<n){
            tmp+='(';
            solve(n,tmp,open+1,close);
            tmp.pop_back();
        }
        if(close<open){
            tmp+=')';
            solve(n,tmp,open,close+1);
            tmp.pop_back();
        }
    }
};