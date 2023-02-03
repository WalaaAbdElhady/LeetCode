class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int sz = min(str1.size(), str2.size());
        string ans="",tmp="";
        for(int i=0;i<sz;i++){
          tmp+=str1[i];
          if(valid(tmp,str1) && valid(tmp,str2))ans=tmp;
        }
        return ans;
    }
    bool valid(string& div,string&s){
        string tmp=div;
        while(tmp.size()<s.size()){
           tmp+=div;
        }
        return tmp==s;
    }
};