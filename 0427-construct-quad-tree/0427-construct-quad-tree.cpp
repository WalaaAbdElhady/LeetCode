/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
	Node* construct(vector<vector<int>>& grid) {
		return solve(0, 0, grid.size(), grid);
	}
	Node* solve(int i, int j,int n, vector<vector<int>>& grid) {
		if (isSame(i, j, n, grid)) {
			return new Node(grid[i][j], true);
		}
		Node* root = new Node();
		n /= 2;
		root->topLeft = solve(i, j, n, grid);
		root->topRight = solve(i, j + n, n ,grid);
		root->bottomLeft = solve(i + n, j, n, grid);
		root->bottomRight = solve(i + n, j + n,n, grid);
        return root;
	}
	bool isSame(int x, int y, int n, vector<vector<int>>& grid) {
		for (int i = x; i < x + n; ++i) {
			for (int j = y; j < y + n; ++j) {
				if (grid[i][j] != grid[x][y])
					return false;
			}
		}
		return true;
	}
};