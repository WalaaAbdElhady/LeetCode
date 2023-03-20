class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0, ans = 0; 
        for(int i = 0; i < flowerbed.size(); i++){
            if (!flowerbed[i] && (!i || !flowerbed[i - 1]) && (i == flowerbed.size() - 1 || !flowerbed[i + 1])){
                cnt ++;
                flowerbed[i] = 1;
            }
        }
        return cnt >= n;
    }
};