class Solution {
private:
vector<string>ans;
int n;
public:
vector<string> restoreIpAddresses(string s) {
    n = s.size();
    solve(0, 0, "", s);
    return ans;
}
void solve(int idx,int numOfBytes ,string curAddress,string s) {
    if (numOfBytes > 4)return;// base case
    if (numOfBytes == 4 && idx == n) {
        curAddress.pop_back();//because i add "." after each Byte
        ans.push_back(curAddress);
        return;
    }
    for (int i = 1; i <= 3 && idx + i <= n; i++) {// (idx+i<=n)=> if we reach at the end of string 
        string byte = s.substr(idx, i);
        if (byte[0] == '0' && i != 1)break;//leading zero or not
        if (stoi(byte) <= 255) {// if it valid or not
            solve(idx + i, numOfBytes + 1, curAddress + byte + ".", s);
        }
    }

 }

};