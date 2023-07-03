class Solution {
public:
    bool buddyStrings(string s, string goal) {
       if(s.size()!=goal.size() || s.size()==1)return false;
        map<char,int>frq;
        if(s==goal){
            bool ok=0;
            for(char c:s){
                frq[c]++;
                if(frq[c]==2)ok=1;
            }
            if(frq.size()==1 || ok)return true;
        }
        else{
            int cnt=0,j=0,k=0,ok1=0,ok2=0;
            for(int i=0;i<s.size();i++){
                if(s[i]!=goal[i])cnt++;
                if(cnt==1 && !ok1)j=i,ok1=1;
                if(cnt==2 && !ok2)k=i,ok2=1;
            }
            swap(s[j],s[k]);
            if(s==goal)return true;
        }
        return false;
    }
};