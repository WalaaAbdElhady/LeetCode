class Solution {
    static int solve(int i, int[] arr, int n, int[] dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=Math.max(arr[i]+solve(i+2, arr, n, dp), solve(i+1, arr, n, dp));
    }
    
    public int rob(int[] nums) {
        int n=nums.length;
        int[] dp=new int[n];
        Arrays.fill(dp, -1);
        
        if(n==0) return 0;
        else if(n==1) return nums[0];
        return solve(0, nums, n, dp);
    }
}