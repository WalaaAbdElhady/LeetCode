class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans(spells.size());
        for(int i=0;i<spells.size();i++){
            int l = 0, r = potions.size() - 1, res = potions.size();
            while(l<=r){
                int md=(l+r)/2;
                if((long long)potions[md]*spells[i]>=success)r=md-1,res=md;
                else l=md+1;
            }
            ans[i]=potions.size()-res;
        }
        return ans;
    }
};