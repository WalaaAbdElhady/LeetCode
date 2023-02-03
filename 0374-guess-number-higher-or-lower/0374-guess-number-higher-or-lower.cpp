/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
   int guessNumber(int n) {
    int l = 1, r = n, md;
    while (l <= r) {
        md = l + (r - l) / 2;
        int ans = guess(md);
        if (ans == 0)return md;
        else if (ans == -1)r = md - 1;
        else l=md+1;
    }
    return -1;
}
};