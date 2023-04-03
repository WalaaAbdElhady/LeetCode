class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0;
        sort(people.begin(),people.end());
        for(int i=0,j=people.size()-1;i<people.size()&&j>=0;j--){
             if(j<i)break;
            if(people[i]+people[j]<=limit)i++;//at most two people at the same 
            cnt++;
        }
        return cnt;
    }
};