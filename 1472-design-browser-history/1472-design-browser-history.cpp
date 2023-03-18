struct Node{
    string val;
    Node *next;
    Node *prev;
    Node(string url){
        val = url;
        next = NULL;
        prev = NULL;
    }
};
class BrowserHistory {
private:
    Node* root;
public:
    BrowserHistory(string homepage) {
        root = new Node(homepage);
    }
    
    void visit(string url) {
        root->next = new Node(url);
        root->next->prev = root;
        root = root->next;
    }
    
    string back(int steps) {
        while(root->prev && steps){
            root = root->prev;
            steps --;
        }
        return root->val;
    }
    
    string forward(int steps) {
        while(root->next && steps){
            root = root->next;
            steps --;
        }
        return root->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */