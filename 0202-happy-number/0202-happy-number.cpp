class Solution {
public:
    bool isHappy(int n){
        int slow = n, fast = square(n);
        while(slow != fast){
            slow = square(slow);
            fast = square(square(fast));
        }
       // cout<<slow<<' '<<fast<<"\n";
        return slow == 1;
    }
    int square(int n){
        int sum = 0;
        while(n > 0){
            sum += pow(n%10,2);
            n /= 10;
        }
        return sum;
    }
};