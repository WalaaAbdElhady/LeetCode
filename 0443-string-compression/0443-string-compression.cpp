class Solution {
public:
    int compress(vector<char>& chars) {
      if(chars.size() == 1)return 1;
      int idx = 0, cnt = 1; 
      for(int i = 0; i < chars.size(); i++){
          while(i < chars.size() - 1 && chars[i] == chars[i + 1])cnt++,i++;
          chars[idx++] = chars[i];
          //cout<<idx<<' '<<i<<' '<<cnt<<"\n";
          if(cnt > 1){
              string s = to_string(cnt);
                for (char digit : s)
                    chars[idx++] = digit;
          }
          cnt = 1;
      }
        return idx;
    }
};