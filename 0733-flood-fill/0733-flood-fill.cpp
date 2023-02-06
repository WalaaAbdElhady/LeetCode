class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc]) return image;
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int old, int color) {
    if (sr >= image.size() || sr < 0 || sc >= image[0].size() || sc < 0 || image[sr][sc] != old)return;
    image[sr][sc] = color;
    dfs(image, sr + 1, sc, old, color);
    dfs(image, sr - 1, sc, old, color);
    dfs(image, sr, sc + 1, old, color);
    dfs(image, sr, sc - 1, old, color);
}
};