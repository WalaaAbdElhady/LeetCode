class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++)q.push(stones[i]);
        while(q.size()>1){
            int r=q.top();
            q.pop();
            int l=q.top();
            q.pop();
            q.push(r-l);
        }
        return q.top();
    }
};