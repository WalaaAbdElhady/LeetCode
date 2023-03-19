class WordDictionary {
private:
    vector<string> dic;
public:
    WordDictionary() {

    }

    void addWord(string word) {
        dic.push_back(word);
    }

    bool search(string word) {
        int cnt = 0;
        int n = word.size();
        for (int i = 0; i < dic.size(); i++) {
            if (n == dic[i].size()) {
                for (int j = 0; j < n; j++) {
                    if (dic[i][j] == word[j] || word[j] == '.')cnt++;
                    else {
                        cnt = 0;
                        break;
                    }
                }
                if (cnt == n) return true;
            }
        }
        return false;
    }
};