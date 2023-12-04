class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2])ans=max(ans,num[i]-'0');
        }
        if(ans==-1)return "";
        string tmp=to_string(ans);
        return tmp+tmp+tmp;
    }
};