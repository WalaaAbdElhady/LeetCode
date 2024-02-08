class Solution {
public:
    int numSquares(int n) {
     if(isPerfect(n)) return 1;
      // 2
      for(int i=1;i*i<=n;i++){
          if(isPerfect(n-(i*i))) return 2; 
        }
      // 4
      while(n%4==0) n/=4;
      if(n%8==7) return 4;
      // 3
      return 3;
    }
     bool isPerfect(int s){
        int s1=(int)sqrt(s);
        if(s1*s1==s) return true;
        return false;
    }
};