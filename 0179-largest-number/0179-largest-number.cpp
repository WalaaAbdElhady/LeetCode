class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>tmp;
        string ans="";
        for(int i=0;i<nums.size();i++)tmp.push_back(to_string(nums[i]));
        sort(tmp.begin(),tmp.end(),cmp);
        //for(int i=0;i<tmp.size();i++)cout<<tmp[i]<<' ';
        for(int i=0;i<tmp.size();i++)ans+=tmp[i];
        if(ans.size()>1 && ans[0]=='0')return "0";
        return ans;
    }
    static bool cmp(string a,string b){
        return a+b>b+a;
    }
};