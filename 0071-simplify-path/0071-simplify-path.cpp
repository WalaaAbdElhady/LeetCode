class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string tmp="",ans="";
        for(int i=0;i<path.size();i++){
            if(path[i]=='/')continue;
            tmp="";
            while(i<path.size() && path[i]!='/')tmp+=path[i++];
            if(tmp==".")continue;
            if(tmp==".."){
                if(!st.empty())st.pop();
            }
            else st.push(tmp);
        }
        while(!st.empty()){
            ans='/'+st.top()+ans;
            st.pop();
        }
        if(!ans.size())ans='/';
        return ans;
    }
};